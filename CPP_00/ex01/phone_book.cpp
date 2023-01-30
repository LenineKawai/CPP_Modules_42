/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:32:51 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/15 10:15:28 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

static std::string	process_add_input(void)
{
	std::string	buffer;

	std::cout << "> ";
	std::getline(std::cin, buffer);
	if (std::cin.eof() == 1)
			std::exit (1);
	while (buffer.empty())
	{
		std::cout << "you gotta write something in that standard input luv'" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (std::cin.eof() == 1)
			std::exit (1);
	}
	return (buffer);
}

static void	print_contact_info(std::string info)
{
	if (info.length() > 10)
		std::cout << std::setw(10) << info.substr(0, 9).replace(9, 1, ".") << std::right;
	else
		std::cout << std::setw(10) << info.substr(0, 10) << std::right;
}

PhoneBook::PhoneBook()
{
	contact_index = 0;
	requested_index = 0;
	std::cout << "Default PhoneBook Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Default PhoneBook DESTRUCTOR called" << std::endl;
	return ;
}

void	PhoneBook::print_contact()
{
	if (_contacts[requested_index].get_FirstName().empty())
	{
		std::cout << "This contact is empty luv' sorry about that" << std::endl;
		return ;
	}
	std::cout << "\033[32mFirst name     : \033[0m" << _contacts[requested_index].get_FirstName() << std::endl;
	std::cout << "\033[32mLast name      : \033[0m" <<_contacts[requested_index].get_LastName() << std::endl;
	std::cout << "\033[32mNickname       : \033[0m" <<_contacts[requested_index].get_Nickname() << std::endl;
	std::cout << "\033[32mPhone number   : \033[0m" <<_contacts[requested_index].get_PhoneNumber() << std::endl;
	std::cout << "\033[32mDarkest secret : \033[0m" <<_contacts[requested_index].get_DarkSecret() <<std::endl;
}

bool	PhoneBook::print_contacts_list()
{

	for(int i = 0; i < CONTACT_NBR; i ++)
	{
		if (_contacts[i].get_FirstName().empty())
		{
			if (i == 0)
				return (false);
			break ;
		}
		std::cout << std::setw(10) << i << "|";
		print_contact_info(_contacts[i].get_FirstName());
		std::cout << "|";
		print_contact_info(_contacts[i].get_LastName());
		std::cout << "|";
		print_contact_info(_contacts[i].get_Nickname());
		std::cout << std::endl;
	}
	return (true);
}
Contact*	PhoneBook::get_contact()
{
	return (_contacts);
}

void	PhoneBook::set_contact()
{
	std::string buffer;

	std::cout << "What's the first name of yer contact, please?" << std::endl;
	buffer = process_add_input();
	_contacts[contact_index].set_FirstName(buffer);
	
	std::cout << "What's that last name of yer contact ?" << std::endl;
	buffer = process_add_input();
	_contacts[contact_index].set_LastName(buffer);
	
	std::cout << "A nickname maybe ?" << std::endl;
	buffer = process_add_input();
	_contacts[contact_index].set_Nickname(buffer);
	
	std::cout << "not last and not least, the phone number of yer contact ?" << std::endl;
	buffer = process_add_input();
	_contacts[contact_index].set_PhoneNumber(buffer);

	std::cout << "Finaly, what untellable tale is your contact hiding?" << std::endl;
	buffer = process_add_input();
	_contacts[contact_index].set_DarkSecret(buffer);
	std::cout << "Thanks luv', yer contact is registered all right !" << std::endl;
}

size_t	PhoneBook::get_contact_index()
{
	return (contact_index);
}

void	PhoneBook::set_contact_index()
{
	contact_index ++;
	if (contact_index > CONTACT_NBR - 1)
	 contact_index = 0;
}

size_t	PhoneBook::get_requested_index()
{
	return (requested_index);
}

int	PhoneBook::set_requested_index()
{
	std::string	buffer;
	int			int_buffer;

	try
	{
		std::cout << "Which index of yer phonebook would you like to consult luv' ?"
		<< std::endl;
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (std::cin.eof() == 1)
			std::exit (1);
		int_buffer = std::stoi(buffer);
		if (int_buffer < 0 || int_buffer >= CONTACT_NBR)
		{
			std::cout << "This isn't the year 2022 luv'"
			"you've got eight index raging from 0 to " << CONTACT_NBR - 1 << " in this phonebook, no more, no less"
			<< std::endl;
			return (INVALID_INDEX);
		}
		else
			requested_index = int_buffer;
	}
	catch (std::invalid_argument const& ex)
	{
		std::cout << "this ain't a valid index luv'" << std::endl;
		return (INVALID_INDEX);
	}
	catch (std::out_of_range const& ex)
	{
		std::cout << "This is just too big "
		"or too negativ of a number for a wee phonebook" << std::endl;
		return (INVALID_INDEX);
	}
	return (VALID_INDEX);
}
