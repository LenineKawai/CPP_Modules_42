/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:22:44 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:28:07 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << GREEN << BOLD
	<< "The clay is now a Dog"
	<< END << std::endl;
	brain = new Brain();
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
	delete brain;
	std::cout << RED << BOLD
	<< "Its soul left the body of a Dog " << END
	<< std::endl;
}

Dog & Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	if (this->brain != NULL)
		delete this->brain;
	this->brain = new Brain;
	this->brain->setIdeas(*dog.brain);
	return	(*this);
}

void	Dog::makeSound() const
{
	std::cout << BOLD << "The thing goes : ";
	std::cout << "BARK BARK" << END << std::endl;
}

Brain	&Dog::getBrain()
{
	return (*brain);
}