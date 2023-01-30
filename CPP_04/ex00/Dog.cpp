/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:22:44 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 16:44:02 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << GREEN << BOLD
	<< "The clay is now a Dog"
	<< END << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << PINK << BOLD
	<< "A Dog Doppleganger was created by the devil"
	<< END << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << RED << BOLD
	<< "Its soul left the body of a Dog " << END
	<< std::endl;
}

Dog & Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return	(*this);
}

void	Dog::makeSound() const
{
	std::cout << BOLD << "The thing goes : ";
	std::cout << "BARK BARK" << END << std::endl;
}