/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:39:19 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/15 10:14:01 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	quit()
{
	std::string str;

	std::cout << "Are you sure about exiting luv' ? All yer contact's infos will be lost fer ever .."
	"if so, enter 'y' : ";
	std::getline(std::cin, str);
	if (std::cin.eof() == 1)
			std::exit (1);
	if (str != "y")
	{
		std::cout << "not leaving yet i see." << std::endl;
		return ;
	}
	std::cout << "Farewell luv'" << std::endl;
	std::exit (0);
}

void	default_message()
{
	std::cout << "Yer options are :"<< std::endl;
	std::cout << "\033[31m- ADD : \033[0m" << "will add a contact to this wee phone book.\n"
	" beware if ye've already got more than eight it'll erase the oldest one."<< std::endl;
	std::cout << "\033[31m- SEARCH : \033[0m" << "will ask you fer an index and will give ye the related infos." << std::endl;
	std::cout << "\033[31m- EXIT : \033[0m" << "will exit, as you might have gleaned frem the name." << std::endl;
}

int	main(int ac, char **av)
{
	PhoneBook	phone_book;
	std::string	buffer;
	
	(void) av;
	if (ac != 1)
	{
		std::cout << "we don't take kindly on arguments around here luv'" << std::endl;
		return (1);
	}
	default_message();
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (std::cin.eof() == 1)
			return (1);
		if (buffer == "EXIT")
			quit();
		else if (buffer == "ADD")
		{
			phone_book.set_contact();
			phone_book.set_contact_index();
		}
		else if (buffer == "SEARCH")
		{
			if (phone_book.print_contacts_list() == false)
				std::cout << "Yer contact list is empty, you gotta \033[031mADD\033[0m some !" << std::endl;
			else if (phone_book.set_requested_index() == VALID_INDEX)
			{
				if (phone_book.get_contact()[phone_book.get_requested_index()].get_FirstName().empty())
					std::cout << "This index is empty, \033[031mADD\033[0m some !" << std::endl;
				else
					phone_book.print_contact();
			}
		}
		else
			default_message();
	}
	return (0);
}