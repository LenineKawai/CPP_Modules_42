/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:50 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 15:09:16 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	;
}

AMateria::AMateria(std::string const & type)
{
	static int i = 1;

	mId		= i;
	mType	= type;
	std::cout << BOLD << "Materia NB : " << mId
	<< " of type : " << mType << " was created" << END
	<< std::endl;
	i ++;
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria::~AMateria()
{
	std::cout << BOLD << "Materia NB : " << mId
	<< " of type : " << mType << " was destroyed" << END
	<< std::endl;
}

AMateria & AMateria::operator=(const AMateria &materia)
{
	this->mId	= materia.mId;
	this->mType	= materia.mType;
	return (*this);
}

AMateria* AMateria::clone() const
{
	return ((AMateria*)this);
}

void AMateria::use(ICharacter& target)
{
	;
}