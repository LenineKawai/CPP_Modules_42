/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:24:26 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/20 09:37:09 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool	check_args(t_sed *sed)
{
	if (sed->filename.empty())
	{
		std::cout << "filename is an empty string" << std::endl;
		return (false);
	}
	else if (sed->to_find.empty())
	{
		std::cout << "If you stare into the abyss, it'll stare right back at you." 
		" We certainly don't want that, do we ?" << std::endl;
		return (false);
	}
	return (true);
}

void	args_to_string(t_sed *sed, char **av)
{
	sed->filename		= av[1];
	sed->to_find		= av[2];
	sed->replacement	= av[3];
	sed->to_find_len	= sed->to_find.length();
}

std::string	ft_replace(t_sed *sed, std::string& line)
{
	size_t		found_index;
	size_t		line_len;
	size_t		i;
	std::string	new_line;

	i = 0;
	found_index = line.find(sed->to_find, i);
	while (found_index != std::string::npos)
	{
		line_len = line.length();
		while (i < found_index)
		{
			new_line.push_back(line[i]);
			i ++;
		}
		new_line.append(sed->replacement);
		line = line.substr(found_index + sed->to_find_len, line_len);
		found_index = line.find(sed->to_find);
		i = 0;
	}
	new_line.append(line, i, line_len);
	return (new_line);
}

int	ft_sed(t_sed *sed, char **av)
{
	std::string	line;
	std::string	new_filename;

	new_filename = sed->filename.append(".replace");
	sed->file.open(std::string(av[1]));
	if (sed->file.bad() || sed->file.fail())
	{
		std::cout << "Open failed, or the specified file doesn't exist." << std::endl;
		return (1);
	}
	sed->new_file.open(new_filename);
	while (!sed->file.eof())
	{
		std::getline(sed->file, line);
		if (sed->file.eof())
			sed->new_file << ft_replace(sed, line);
		else
			sed->new_file << ft_replace(sed, line).append("\n");
	}
	sed->file.close();
	return (0);
}

int	main(int ac, char **av)
{
	t_sed		sed;
	
	if (ac != 4)
	{
		std::cout << "this program require three argmuments :" << std::endl;
		std::cout << "- a filename." << std::endl;
		std::cout << "- a string you want occurences found in the above mentioned file." << std::endl;
		std::cout << "- a string to replace those said occurences." << std::endl;
		return (1);
	}
	args_to_string(&sed, av);
	if (!check_args(&sed))
		return (1);
	return (ft_sed(&sed, av));
}