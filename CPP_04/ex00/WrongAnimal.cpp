/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:56:38 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 14:24:59 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
# include	"Animal.hpp"

WrongAnimal::WrongAnimal() : type("Stack of sheit")
{
	std::cout << GREY << BOLD
	<< "A tortured soul imprinted some stack of sheit"
	<< END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << PINK << BOLD
	<< "An WrongAnimal Doppleganger was created by the devil"
	<< END << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "The Corpse went back to the dirt" << END << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->type = animal.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void		WrongAnimal::setType(std::string nType)
{
	type = nType;
}

void		WrongAnimal::makeSound() const
{
	static int i = 0;

	std::cout << BOLD << "The thing goes : ";
	if (i % 4 == 0)
		std::cout << "HI-HAN" << END << std::endl;
	else if (i % 6 == 0)
		std::cout << "JVAIS TE FAIRE COURIR, ROUQUIN !" << END << std::endl;
	else
		std::cout << "CUI CUI" << END << std::endl;
	i ++;
}
