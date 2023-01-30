/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:26:52 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 15:13:33 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character()
{
	cName = "Tarte au pion";
}

Character::Character(const std::string &name)
{
	cName = name;
}

Character::Character(const Character &character)
{
	*this = character;
}
Character::~Character()
{
	;
}

Character & Character::operator=(const Character &character)
{
	this->cName = character.cName;
	for (int i = 0; i < 4; i ++)
	{
		if (this->cInventory[i])
			delete this->cInventory[i];
		this->cInventory[i] = character.cInventory[i]->clone();
	}
}

/*******************/
/*    FUNCTIONS    */
/*******************/

std::string const & Character::getName() const
{
	return (cName)
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}