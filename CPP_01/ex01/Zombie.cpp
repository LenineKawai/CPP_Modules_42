/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:21:47 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:48:30 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "\033[31mNameless Zombie\033[0m";
	std::cout << "Default Zombie \033[32mConstructor\033[0m called." << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Default Zombie \033[33mDESTRUCTOR\033[0m called." << std::endl;
	std::cout << _name << " " << _zombie_id << " died a second time" << std::endl;
	return ;
}

std::string	Zombie::get_name()
{
	return (_name);
}

void	Zombie::set_name(std::string name)
{
	_name = name;
	return ;
}

int	Zombie::get_id()
{
	return (_zombie_id);
}

void	Zombie::set_id(int id)
{
	_zombie_id = id;
	return ;
}

void	Zombie::announce()
{
	static int id = 1;
	this->set_id(id);
	std::cout << "\033[31m" << _name << "\033[0m " << id << " : BraiiiiiiinnnzzzZ..." << std::endl;
	id ++;
}