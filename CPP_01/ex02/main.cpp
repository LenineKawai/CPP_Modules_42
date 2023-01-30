/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:29:14 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/15 12:29:42 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	strZZZ(std::string brain)
{
	brain.append("\033[36mZZZ\033[0m"); //CYAN
}

void	refZZZ(std::string& brain)
{
	brain.append("\033[31mZZZ\033[0m"); //RED
}

void	ptrZZZ(std::string *brain)
{
	brain->append("\033[35mZZZ\033[0m"); //MAGENTA
}

int main (void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*brainPTR = &brain;
	std::string&	brainREF = brain;


	std::cout << "\033[33mstr adress \033[0m= " << "\033[31m" << &brain << std::endl;
	std::cout << "\033[33mstrPTR address \033[0m= " << "\033[31m" << &brainPTR << std::endl;
	std::cout << "\033[33mstrREF adress \033[0m= " << "\033[31m" << &brainREF << std::endl;

	std::cout << "\033[32mstr value \033[0m= " << brain << std::endl;
	std::cout << "\033[32mstrPTR value \033[0m= " << *brainPTR << std::endl;
	std::cout << "\033[32mstrREF value \033[0m= " << brainREF << std::endl;

	strZZZ(brain);
	ptrZZZ(brainPTR);
	refZZZ(brainREF);

	std::cout << "\033[32mstr value \033[0m= " << brain << std::endl;
	std::cout << "\033[32mstrPTR value \033[0m= " << *brainPTR << std::endl;
	std::cout << "\033[32mstrREF value \033[0m= " << brainREF << std::endl;
	return (0);
}