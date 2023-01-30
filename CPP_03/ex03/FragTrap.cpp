/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:41:33 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:32:03 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_Name			= "NamelessFrag";
	_EnergyPoints	= 100;
	_HitPoints		= 100;
	_AttackDammages	= 30;
	std::cout << GREY << BOLD
	<< "Default FragTrap Constructor Called -- BZZZZT"
	<< END << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name			= Name;
	_EnergyPoints	= 100;
	_HitPoints		= 100;
	_AttackDammages	= 30;
	std::cout << YELLOW << BOLD << _Name << GREEN " : FragTrap CONSTRUCTED -- FRAG-FROG" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	*this = FragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << BOLD << _Name << RED << BOLD << " : FragTrap DESTRUCTED -- Fraae..." << END << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
	this->_Name				= FragTrap._Name;
	this->_EnergyPoints		= FragTrap._EnergyPoints;
	this->_HitPoints		= FragTrap._HitPoints;
	this->_AttackDammages	= FragTrap._AttackDammages;	
	return (*this);
}


/******************/
/*                */
/*    FUCTIONS    */
/*                */
/******************/

void	FragTrap::attack(const std::string &target)
{
	if (dead(*this) == true || tired(*this) == true) 
		return ;
	std::cout << YELLOW << BOLD << _Name << END << " Attack " YELLOW << BOLD << target << END;
	std::cout << " for a total of " << RED << BOLD << _AttackDammages << END << " dammages inflicted -- YOU GOT FRAGGED !!!" << std::endl;
	_EnergyPoints --;
}

void FragTrap::highFiveGuys(void)
{
	if (dead(*this) == true || tired(*this) == true)
		return ;
	std::cout << YELLOW << BOLD << _Name
	<< BLUE << " : HIGH FIVE GUYS ?!?!"
	<< END << std::endl;
}

void	FragTrap::fragPrintEP() const
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< CYAN << BOLD << this->getEP() << END << " EP" << std::endl;	
}

void	FragTrap::fragPrintHP() const
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< GREEN << BOLD << this->getHP() << END << " HP" << std::endl;	
}