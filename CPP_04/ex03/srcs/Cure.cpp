/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:52 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 14:42:30 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"

Cure::Cure()
{
	mType = "cure";
}

Cure::Cure(const Cure &Cure)
{
	*this = Cure;
}

Cure::~Cure()
{
	;
}

Cure & Cure::operator=(const Cure &cure)
{
	this->mType = cure.mType;
	this->mId = cure.mId;
}

AMateria*	Cure::clone() const
{
	AMateria *newMateria = new Cure;
	return (newMateria);
}

void AMateria::use(ICharacter& target)
{
	std::cout << BOLD << "* Cure the wounds of " 
	<< YELLOW << target.getName() << " *" << END << std::endl;
}