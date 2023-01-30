/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:24:48 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:28:26 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("NamelessClap"), _HitPoints(10), _EnergyPoints(10), _AttackDammages(0)
{
	std::cout << GREY << BOLD <<
	"Default ClapTrap Constructor Called -- BZZZZT"
	<< END << std::endl;
}

ClapTrap::ClapTrap(std::string Name): _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDammages(0)
{
	std::cout << YELLOW << BOLD << _Name << GREEN " : ClapTrap CONSTRUCTED -- BIP-BOP" << END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	*this = ClapTrap;
	std::cout << YELLOW << BOLD << _Name << PINK << " : ClapTrap COPY CONSTRUCTED -- BIP-BOP" << END << std::endl;
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
	std::cout << YELLOW << BOLD << _Name << RED << BOLD << " : ClapTrap DESTRUCTED -- Biiip-boo..." << END << std::endl;
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
	if (newHP > 100)
		_HitPoints = 100;
	else 
		_HitPoints = newHP;
}

unsigned int	ClapTrap::getEP(void) const
{
	return (_EnergyPoints);
}

void		ClapTrap::setEP(unsigned int newEP)
{
	if(dead(*this) == true)
		return ;
	if (newEP > 100)
	{
		std::cout << YELLOW << BOLD << _Name << END <<
		" : GOT ALL ITS EP BACK !! FOR FREE !!!!!!"
		<< std::endl;
		_EnergyPoints = 100;
	}
	else
	{
		std::cout << YELLOW << BOLD << _Name << END <<
		" : got some EP back !! FOR FREE !!!!!!"
		<< std::endl;
		_EnergyPoints = newEP;
	}
}

unsigned int	ClapTrap::getATT(void) const
{
	return (_AttackDammages);
}

void		ClapTrap::setATT(unsigned int newATT)
{
	if(dead(*this) == true)
		return ;
	_AttackDammages = newATT;
}

/******************/
/*                */
/*    FUCTIONS    */
/*                */
/******************/

bool	tired(ClapTrap &ClapTrap)
{
	if (ClapTrap.getEP() == 0)
	{
		std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " : is out of energy -- RECHARGE !!!!!!" << std::endl;	
		return (true);
	}
	return (false);
}

bool	dead(ClapTrap &ClapTrap)
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
	if (dead(*this) == true || tired(*this) == true) 
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
	if (_HitPoints + amount >= 100)
	{
		_EnergyPoints --;
		_HitPoints = 100;
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