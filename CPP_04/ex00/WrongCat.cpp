/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:52 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 14:19:44 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("WrongCat");
	std::cout << BLUE << BOLD
	<< "The sheit is now a WrongCat"
	<< END << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	std::cout << PINK << BOLD
	<< "A WrongCat Doppleganger was created by the devil"
	<< END << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << RED << BOLD
	<< "Its soul left the body of a " << YELLOW << type << END
	<< std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &wrongCat)
{
	this->type = wrongCat.type;
	return (*this);
}