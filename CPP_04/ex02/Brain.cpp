/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:57:16 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 10:50:04 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BOLD << "Brain ready to fill up with ideas" << END << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain::~Brain()
{
	std::cout << PINK << BOLD << "Oups, brain death" << END << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i ++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

std::string Brain::getIdea(unsigned int i) const
{
	if (i < 100)
		return (ideas[i]);
	else
	{
		std::cout << "Animal brains can't store more than 100 ideas" << std::endl;
		return (ideas[99]);
	}
}

void		Brain::setIdea(const std::string &str, unsigned int i)
{
	if (i < 100)
		ideas[i] = str;
	else
		std::cout << "Animal brains can't store more than 100 ideas" << std::endl;
}
void		Brain::setIdeas(const Brain &brain)
{
	for (int i = 0; i < 100; i ++)
		this->ideas[i] = brain.getIdea(i);
}