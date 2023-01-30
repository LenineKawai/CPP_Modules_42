/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:23:23 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:08:43 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void	clapPrintEP(ClapTrap &ClapTrap)
{
	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
	<< CYAN << BOLD << ClapTrap.getEP() << END << " EP" << std::endl;	
}

static void	clapPrintHP(ClapTrap &ClapTrap)
{
	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
	<< GREEN << BOLD << ClapTrap.getHP() << END << " HP" << std::endl;	
}

int main(void)
{
	ClapTrap ClapTrap1("ClapTrap 00");
	ScavTrap ScavTrap1("ScavTrap 00");
	ScavTrap ScavTrap2(ScavTrap1);

	ScavTrap2.setName("ScavTrap 00 Clone");
	ScavTrap1.scavPrintHP();
	ScavTrap1.scavPrintEP();
	clapPrintHP(ClapTrap1);
	clapPrintEP(ClapTrap1);

	ClapTrap1.attack("Les Sudetes");

	for (int i = 0; i < 51; i ++)
		ScavTrap1.attack("La Pologne");

	ScavTrap1.scavPrintEP();
	ScavTrap2.scavPrintEP();
	
	std::cout << std::endl << std::endl;

	ScavTrap1.takeDamage(50);
	ScavTrap1.takeDamage(20);
	ScavTrap1.setEP(5);
	ScavTrap1.scavPrintHP();
	ScavTrap1.scavPrintEP();	
	for (int i = 0; i < 6; i ++)
		ScavTrap1.beRepaired(50);
	ScavTrap1.scavPrintHP();
	ScavTrap1.scavPrintEP();	
	
	std::cout << std::endl << std::endl;

	ScavTrap1.guardGate();
	ScavTrap1.attack("Le Bresil");
	ScavTrap1.takeDamage(100);
	ScavTrap1.attack("Le Bresil");
	ScavTrap1.guardGate();

	return (0);
}