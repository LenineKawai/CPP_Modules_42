/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:01:19 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 15:41:22 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; av[i]; i ++)
	{
		for (int j = 0; av[i][j]; j ++)
		{
			if (std::isalnum(av[i][j]) == true)
				av[i][j] = std::toupper(av[i][j]);
		}
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}