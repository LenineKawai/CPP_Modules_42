/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:31 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 10:18:56 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::string font = "\033[31m\033[1m";
	font.append(type).append("\033[0m");
	_type = font;
	std::cout << "Weapon \033[32mConstructor\033[0m called, weapon type : " << _type << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Default Weapon \033[31mDESTRUCTOR\033[0m called. ";
	std::cout << _type << " has been lost to the Zombies." << std::endl;
	return ;
}

std::string	Weapon::get_type() const
{
	return (_type);
}

void		Weapon::set_type(const std::string& type)
{
	std::string font = "\033[31m\033[1m";
	font.append(type).append("\033[0m");
	_type = font;
}