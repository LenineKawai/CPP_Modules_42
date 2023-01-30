/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:33 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 10:19:29 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	std::string font = "\033[36m\033[1m";
	font.append(name).append("\033[0m");
	_name = font;
	_weapon = NULL;
	std::cout << "HumanB \033[32mConstructor\033[0m called, name : " << _name << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "Default HumanB \033[31m DESTRUCTOR\033[0m called. ";
	std::cout << _name << " died in the Zombiepocalypse" << std::endl;
	return ;
}

std::string	HumanB::get_name() const
{
	return (_name);
}

void		HumanB::set_name(std::string name)
{
	_name = name;
	return ;
}

Weapon*		HumanB::get_weapon() const
{
	return (_weapon);
}

void		HumanB::set_weapon(Weapon &weapon)
{
	_weapon = &weapon;
	return ;
}

void		HumanB::attack() const
{
	if (_weapon == NULL)
	{
		std::cout << _name << " attack with his bare \033[31m\033[1mHANDS\033[0m"
		" like an action hero *BIM BAM BOOM*"
		<< std::endl;
	}
	else
	{
		std::cout << _name << " attack with " << _weapon->get_type()
		<< " *BONK*" << std::endl;
	}
	return ;
}