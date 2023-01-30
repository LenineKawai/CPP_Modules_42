/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:43:32 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/19 13:17:59 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Default Harl " << YELLOW << "Constructeur" << END << " called." << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Default Harl " << RED << "DESTRUCTOR" << END << " called." << std::endl;
	return ;
}

void	Harl::debug()
{
	std::cout << BLUE << BOLD <<"[ DEBUG ]" << END << std::endl << std::endl;
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-specialketchup burger."
	"I really do!" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << GREEN << BOLD <<"[ INFO ]" << END << std::endl << std::endl ;
	std::cout << "I cannot believe adding extra bacon costs more money."
	"You didn’t put enough bacon in my burger!"
	"If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << YELLOW << BOLD <<"[ WARNING ]" << END << std::endl << std::endl ;
	std::cout << "I think I deserve to have some extra bacon for free." 
	"I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << RED << BOLD <<"[ ERROR ]" << END << std::endl << std::endl ;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}


void	Harl::complain(std::string level)
{
	std::string	level_arr[4] =
	{"DEBUG", "INFO","WARNING", "ERROR"};
	void 		(Harl::*fct_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i;

	i = 0;	
	while (i < 4)
	{
		if (level_arr[i] == level)
		{
			(this->*fct_ptr[i])();
			return ;
		}
		i ++;
	}
	std::cout << "[ Probably complaining about insignificants problems ]" << std::endl;
}
