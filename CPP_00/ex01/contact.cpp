/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:40:01 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 09:41:47 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	std::cout << "Default Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Default Contact DESTRUCTOR called" << std::endl;
	return ;
}

std::string	Contact::get_FirstName()
{
	return(_FirstName);
}

std::string	Contact::get_LastName()
{
	return (_LastName);
}

std::string	Contact::get_Nickname()
{
	return (_Nickname);
}

std::string	Contact::get_PhoneNumber()
{
	return (_PhoneNumber);
}

std::string	Contact::get_DarkSecret()
{
	return (_DarkSecret);
}

void	Contact::set_FirstName(std::string first_name)
{
	_FirstName = first_name;
}

void	Contact::set_LastName(std::string last_name)
{
	_LastName = last_name;
}

void	Contact::set_Nickname(std::string nickname)
{
	_Nickname = nickname;
}

void	Contact::set_PhoneNumber(std::string phone_number)
{
	_PhoneNumber = phone_number;
}

void	Contact::set_DarkSecret(std::string dark_secret)
{
	_DarkSecret = dark_secret;
}
