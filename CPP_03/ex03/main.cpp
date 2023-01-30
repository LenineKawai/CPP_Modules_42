/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:23:23 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:22:03 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// static void	clapPrintEP(ClapTrap &ClapTrap)
// {
// 	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
// 	<< CYAN << BOLD << ClapTrap.getEP() << END << " EP" << std::endl;	
// }

// static void	clapPrintHP(ClapTrap &ClapTrap)
// {
// 	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
// 	<< GREEN << BOLD << ClapTrap.getHP() << END << " HP" << std::endl;	
// }

int main(void)
{
	DiamondTrap DT("DiamsTrap_00");

	std::cout << std::endl << std::endl;

	DT.DiamsPrintEP();
	DT.DiamsPrintHP();
	DT.attack("Les droits des minoritees");
	DT.takeDamage('b');
	DT.beRepaired('c');
	DT.DiamsPrintEP();
	DT.DiamsPrintHP();
	DT.highFiveGuys();
	DT.guardGate();
	DT.whoAmI();

	std::cout << std::endl << std::endl;

	DT.takeDamage(1001);
	DT.highFiveGuys();
	DT.guardGate();
	DT.whoAmI();

	std::cout << std::endl << std::endl;
}