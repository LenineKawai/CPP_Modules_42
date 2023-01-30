/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:52 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:28:39 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << BLUE << BOLD
	<< "The clay is now a Cat"
	<< END << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	std::cout << PINK << BOLD
	<< "A Cat Doppleganger was created by the devil"
	<< END << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	delete brain;
	std::cout << RED << BOLD
	<< "Its soul left the body of a Cat" << END
	<< std::endl;
}

Cat & Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	if (this->brain != NULL)
		delete this->brain;
	this->brain = new Brain;
	this->brain->setIdeas(*cat.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BOLD << "The thing goes : ";
	std::cout << "MEOW" << END << std::endl;
}

Brain	&Cat::getBrain()
{
	return (*brain);
}