/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:18:00 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:31:27 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_HitPoints 		= this->FragTrap::FragHP;
	this->_EnergyPoints 	= this->ScavTrap::ScavEP;
	this->_AttackDammages	= this->FragTrap::FragAT;
	this->_Name = "NamelessDiams";
	this->ClapTrap::_Name = _Name.append("_clap_name");
	std::cout << GREY << BOLD
	<< " : Default DiamondTrap CONSTRUCTOR Called -- BLING-BLING"
	<< END << std::endl;
}

DiamondTrap::DiamondTrap(std::string diamondName)
{
	this->_HitPoints 		= this->FragTrap::FragHP;
	this->_EnergyPoints 	= this->ScavTrap::ScavEP;
	this->_AttackDammages	= this->FragTrap::FragAT;
	this->_Name = diamondName;
	this->ClapTrap::_Name = diamondName.append("_clap_name");
	std::cout << YELLOW << BOLD << _Name
	<< CYAN << " : DiamondTrap CONSTRUCTOR Called -- BLING-BLING"
	<< END << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout 
	<< YELLOW << BOLD << _Name << RED
	<< " : DiamondTrap DESTRUCTOR Called -- Blwiwing-blwww..."
	<< END << std::endl;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
	*this = DiamondTrap;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
	_HitPoints		= DiamondTrap._HitPoints;
	_EnergyPoints	= DiamondTrap._EnergyPoints;
	_AttackDammages = DiamondTrap._AttackDammages;
	_Name 			= DiamondTrap._Name;
	ClapTrap::_Name	= DiamondTrap.ClapTrap::_Name;
	return (*this);
}

/******************/
/*                */
/*    FUCTIONS    */
/*                */
/******************/

void	DiamondTrap::whoAmI(void)
{
	if (dead(*this) == true || tired(*this) == true)
		return ;
	std::cout << YELLOW << BOLD << ClapTrap::_Name
	<< BLUE << " Or "
	<< YELLOW << BOLD << _Name
	<< BLUE << " Which am I ? I'm at loss. BLINK-SCIT-CLAP-CRAP !?!?!?"
	<< END << std::endl;
}

void	DiamondTrap::DiamsPrintEP() const
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< CYAN << BOLD << this->getEP() << END << " EP" << std::endl;	
}

void	DiamondTrap::DiamsPrintHP() const
{
	std::cout << YELLOW << BOLD << this->getName() << END << " has "
	<< GREEN << BOLD << this->getHP() << END << " HP" << std::endl;	
}
