/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:23:23 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:16:03 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	{
		FragTrap FragTrap1("FragTrap 00");
		
		std::cout << std::endl << std::endl;

		FragTrap1.fragPrintEP();
		FragTrap1.fragPrintHP();
		FragTrap1.attack("McDonald with Jose Bove");
		FragTrap1.takeDamage(10);
		FragTrap1.beRepaired(5);
		FragTrap1.fragPrintEP();
		FragTrap1.fragPrintHP();
		FragTrap1.highFiveGuys();
		FragTrap1.takeDamage(100);
		FragTrap1.highFiveGuys();
		
		std::cout << std::endl << std::endl;
	}

	std::cout << std::endl << std::endl;
	{
		FragTrap F("Frag");
		ClapTrap C("Clap");
		ScavTrap S("Scrap");

		std::cout << std::endl << std::endl;

		F.attack("Bernard Arnault");
		C.attack("Xavier Niel");
		S.attack("Nicolas Sarkozy");

		std::cout << std::endl << std::endl;
	}	
	return (0);
}