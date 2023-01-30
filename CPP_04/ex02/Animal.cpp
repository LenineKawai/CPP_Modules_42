/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:56:38 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:39:09 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Hip of Primal Clay")
{
	std::cout << GREY << BOLD
	<< "A pure soul imprinted some primal clay"
	<< END << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << PINK << BOLD
	<< "An Animal Doppleganger was created by the devil"
	<< END << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << RED << "The Soulless Animal Corpse Went back to the dirt" << END << std::endl;
}

Animal & Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void		Animal::setType(std::string nType)
{
	type = nType;
}

void		Animal::makeSound() const
{
	std::cout << BOLD << "The thing goes : ";
	std::cout << "Pouic Pouic" << END << std::endl;
}
