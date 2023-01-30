/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:05 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 09:45:17 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA()
// {
// 	std::cout << "Default HumanA \033[33mConstructor\033[0m called" << std::endl;
// 	return ;
// }

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::string font = "\033[35m\033[1m";
	font.append(name).append("\033[0m");
	_name = font;
	std::cout << "HumanA \033[32mConstructor\033[0m called, name : " << _name << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "Default HumanA \033[31mDESTRUCTOR\033[0m called. ";
	std::cout << _name << " died in the Zombiepocalypse" << std::endl;
	return ;
}

std::string	HumanA::get_name() const
{
	return (_name);
}

void		HumanA::set_name(std::string name)
{
	_name = name;
	return ;
}

void		HumanA::attack() const
{
	std::cout << _name << " attack with " << _weapon.get_type()
	<< " *BONK*" << std::endl;
	return ;
}