/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:24:48 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:26:45 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("NamelessClap"), _HitPoints(10), _EnergyPoints(10), _AttackDammages(0)
{
	;
}

ClapTrap::ClapTrap(std::string Name): _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDammages(0)
{
	std::cout << YELLOW << BOLD << _Name << GREEN " : CONSTRUCTED -- BIP-BOP" << END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	*this = ClapTrap;
	std::cout << YELLOW << BOLD << _Name << PINK << " : COPY CONSTRUCTED -- BIP-BOP" << END << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	if (this != &ClapTrap)
	{
		this->_Name = ClapTrap._Name;
		this->_HitPoints = ClapTrap._HitPoints;
		this->_EnergyPoints = ClapTrap._EnergyPoints;
		this->_AttackDammages = ClapTrap._AttackDammages;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << BOLD << _Name << RED << BOLD << " : DESTRUCTED -- Biiip-boo" << END << std::endl;
}

/******************/
/*                */
/*     SETNGET    */
/*                */
/******************/

std::string 	ClapTrap::getName(void) const
{
	return (_Name);
}

void			ClapTrap::setName(std::string newName)
{
	_Name = newName;
}

unsigned int	ClapTrap::getHP(void) const
{
	return(_HitPoints);
}

void			ClapTrap::setHP(unsigned int newHP)
{
	if (newHP > 10)
		_HitPoints = 10;
	else 
		_HitPoints = newHP;
}

unsigned int	ClapTrap::getEP(void) const
{
	return (_EnergyPoints);
}

void		ClapTrap::setEP(unsigned int newEP)
{
	if (newEP > 10)
		_EnergyPoints = 10;
	else
		_EnergyPoints = newEP;
}

unsigned int	ClapTrap::getATT(void) const
{
	return (_AttackDammages);
}

void		ClapTrap::setATT(unsigned int newATT)
{
	_AttackDammages = newATT;
}

/******************/
/*                */
/*    FUCTIONS    */
/*                */
/******************/

static bool tired(ClapTrap &ClapTrap)
{
	if (ClapTrap.getEP() == 0)
	{
		std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " : is out of energy -- RECHARGE !!!!!!" << std::endl;	
		return (true);
	}
	return (false);
}

static bool	dead(ClapTrap &ClapTrap)
{
	if (ClapTrap.getHP() == 0)
	{
		std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " : is dead as a doornail -- sorry about that" << std::endl;
		return (true);
	}	
	return (false);
}

void		ClapTrap::attack(const std::string &target)
{
	if (tired(*this) == true || dead(*this) == true)
		return ;
	std::cout << YELLOW << BOLD << _Name << END << " Attack " YELLOW << BOLD << target << END;
	std::cout << " for a total of " << RED << BOLD << _AttackDammages << END << " dammages inflicted -- THIS IS HUGE" << std::endl;
	_EnergyPoints --;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (dead(*this) == true)
		return ;
	if ((int)_HitPoints - (int)amount < 0 || (int)_HitPoints - (int)amount > (int)_HitPoints)
	{
		_HitPoints = 0;
		std::cout << "OH DAMN !! " << YELLOW << BOLD << _Name << END << " TOOK "
		<< RED << BOLD << amount << END " DAMMAGES AND DIED !!!!!!?!?!?!!?!" << std::endl;	
	}
	else
	{
		_HitPoints -= amount;
		std::cout << YELLOW << BOLD << _Name << END << " : took "
		<< RED << BOLD << amount << END " dammages !" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (tired(*this) == true || dead(*this) == true)
		return ;
	if (_HitPoints + amount <_HitPoints)
	{
		std::cout << RED << BOLD << "OVERFLOW : REPAIRDS FAILED -- BIP-BOP" << END << std::endl;
		return ;
	}
	if (_HitPoints + amount >= 10)
	{
		_EnergyPoints --;
		_HitPoints = 10;
		std::cout << YELLOW << BOLD << _Name << END << " : repaired for "
		<< GREEN << BOLD << amount << END " HE IS IN GREAT SHAPE, YIPPEE-KI-YAY BUTT-STALION" << std::endl;
	}
	else
	{
		_EnergyPoints --;
		_HitPoints = _HitPoints + amount;
		std::cout << YELLOW << BOLD << _Name << END << " : repaired for "
		<< GREEN << BOLD << amount << END " it feels a bit less anxious about his near coming death !" << std::endl;
	}	
}