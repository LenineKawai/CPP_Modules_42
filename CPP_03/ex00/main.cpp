/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:23:23 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 11:26:02 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void	printEP(ClapTrap &ClapTrap)
{
	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
	<< CYAN << BOLD << ClapTrap.getEP() << END << " EP" << std::endl;	
}

static void	printHP(ClapTrap &ClapTrap)
{
	std::cout << YELLOW << BOLD << ClapTrap.getName() << END << " has "
	<< GREEN << BOLD << ClapTrap.getHP() << END << " HP" << std::endl;	
}

int main(void)
{
	ClapTrap clapTrap("ClapTrap 00");
	ClapTrap clapTrap1(clapTrap);

	clapTrap1.setName("Clap Trap 00 Clone");

	std::cout << std::endl << std::endl;
	
	clapTrap.attack("Michel");
	printHP(clapTrap);
	printEP(clapTrap1);	
	clapTrap.takeDamage(12);
	printHP(clapTrap);
	printEP(clapTrap1);	
	clapTrap.attack("Michel");
	clapTrap.beRepaired(10);

	std::cout << std::endl << std::endl;

	printHP(clapTrap1);
	printEP(clapTrap1);	
	clapTrap1.takeDamage(4);
	clapTrap1.beRepaired(2);
	printHP(clapTrap1);
	printEP(clapTrap1);	
	clapTrap1.takeDamage(0);
	printHP(clapTrap1);
	printEP(clapTrap1);	
	clapTrap1.beRepaired(-2);
	printHP(clapTrap1);
	printEP(clapTrap1);	
	
	std::cout << std::endl << std::endl;

	clapTrap1.setHP(10);
	clapTrap1.setEP(2);
	printEP(clapTrap1);
	printHP(clapTrap1);
	for (int i = 0; i < 3; i ++)
	{
		clapTrap1.attack("Jean Jaures");
		printEP(clapTrap1);
		printHP(clapTrap1);
	}
	clapTrap1.takeDamage(9001);
	printEP(clapTrap1);
	printHP(clapTrap1);
	clapTrap1.takeDamage(9001);
	printEP(clapTrap1);
	printHP(clapTrap1);

	
	std::cout << std::endl << std::endl;

	clapTrap1.setEP(2);
	clapTrap1.setHP(8);
	printEP(clapTrap1);
	printHP(clapTrap1);
	clapTrap1.takeDamage(4);
	printEP(clapTrap1);
	printHP(clapTrap1);
	clapTrap1.beRepaired(888888888);
	printEP(clapTrap1);
	printHP(clapTrap1);
	for (int i = 0; i < 4; i ++)
		clapTrap1.beRepaired(1);
	printHP(clapTrap1);
	printEP(clapTrap1);
	std::cout << std::endl << std::endl;
	
	return (0);
}