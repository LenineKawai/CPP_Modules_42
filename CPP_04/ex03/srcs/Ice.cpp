/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:54 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 14:41:07 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"

Ice::Ice()
{
	mType = "ice";
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
}

Ice::~Ice()
{
	;
}

Ice & Ice::operator=(const Ice &ice)
{
	this->mType = ice.mType;
	this->mId = ice.mId;
}

AMateria*	Ice::clone() const
{
	AMateria *newMateria = new Ice;
	return (newMateria);
}

void AMateria::use(ICharacter& target)
{
	std::cout << BOLD << "* shoots an ice bolt at " 
	<< YELLOW << target.getName() << " *" << END << std::endl;
}