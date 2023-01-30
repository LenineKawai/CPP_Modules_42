/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:13:30 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:25:53 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_Name			= "NamelessScav";
	_EnergyPoints	= 50;
	_HitPoints		= 100;
	_AttackDammages	= 20;
	std::cout << GREY << BOLD
	<< "Default ScavTrap Constructor Called -- BZZZZT"
	<< END << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name			= Name;
	_EnergyPoints	= 50;
	_HitPoints		= 100;
	_AttackDammages	= 20;
	std::cout << YELLOW << BOLD << _Name << GREEN " : ScavTrap CONSTRUCTED -- SCIT-SCOT" << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
	*this = ScavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << BOLD << _Name << RED << BOLD << " : ScavTrap DESTRUCTED -- scii..it..." << END << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	this->_Name				= ScavTrap._Name;
	this->_EnergyPoints		= ScavTrap._EnergyPoints;
	this->_HitPoints		= ScavTrap._HitPoints;
	this->_AttackDammages	= ScavTrap._AttackDammages;	
	return (*this);
}


/******************/
/*                */
/*    FUCTIONS    */
/*                */
/******************/

void	ScavTrap::attack(const std::string &target)
{
	if (dead(*this) == true || tired(*this) == true) 
		return ;
	std::cout << YELLOW << BOLD << _Name << END << " Attack " YELLOW << BOLD << target << END;
	std::cout << " for a total of " << RED << BOLD << _AttackDammages << END << " dammages inflicted -- SCAV-TRAPPED B*** !!!" << std::endl;
	_EnergyPoints --;
}

void ScavTrap::guardGate(void)
{
	if (dead(*this) == true || tired(*this) == true)
		return ;
	std::cout << YELLOW << BOLD << _Name
	<< BLUE << " : Enter Gate Keeper mod, NONE SHALL PASS."
	<< END << std::endl;
}

void	ScavTrap::scavPrintEP()
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< CYAN << BOLD << this->getEP() << END << " EP" << std::endl;	
}

void	ScavTrap::scavPrintHP()
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< GREEN << BOLD << this->getHP() << END << " HP" << std::endl;	
}