/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:37:23 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 10:42:53 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREY << BOLD << "An Intern was hired by HR" << std::endl;
}

Intern::~Intern()
{
	std::cout << GREY << BOLD << "An Intern's ''partnership'' has ended, no one will ever remember them" << std::endl;
}

Intern::Intern(const Intern & monica)
{
	*this = monica;
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	Form *newPardon = NULL;
	Form *newShrub = NULL;
	Form *newRobotomy = NULL;
	std::string	formNameArray[3] =
	{"PresidentialPardon", "ShrubberyForm", "RobotomyRequestForm"};
	for (int i = 0; i < 3; i ++)
	{
		if (formNameArray[i] == formName)
		{
			switch (i)
			{
				case 0 :
					newPardon = new PresidentialPardonForm(target);
					return (newPardon);
				case 1 :
					newShrub = new ShrubberyCreatinForm(target);
					return (newShrub);	
				case 2 :
					newRobotomy = new RobotomyRequestForm(target);
					return (newRobotomy);
				default:
					break;
			}
		}
	}
	std::cout << BOLD << GREY << formName
	<< "Is not a real form Master" << END << std::endl;
	return (newPardon);
}

Intern	&Intern::operator=(const Intern & monica)
{
	(void) monica;
	return (*this);
}
