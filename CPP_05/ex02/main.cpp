/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:08:41 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:40:03 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
	ShrubberyCreatinForm	Shrub("./ceci_est_un_fichier_avec_un_arbre_dedans");
	RobotomyRequestForm		Robotomy("Jerome Musque");
	PresidentialPardonForm	PresPard("Richard Nixon");

	Bureaucrat				President("President Du Monde Avec Un Grand M", 1);

	std::cout << std::endl << std::endl;
	try
	{
		President.signForm(Robotomy);
		President.executeForm(Robotomy);
		President.signForm(PresPard);
		President.executeForm(PresPard);
		President.signForm(Shrub);
		President.executeForm(Shrub);
	}
	catch(const Form::GradeTooLowToSign& e)
	{
		std::cout << e.tooLowToSign() << '\n';
	}
	catch(const Form::GradeTooLowToExec& e)
	{
		std::cout << e.tooLowToExec() << '\n';
	}
	std::cout << std::endl << std::endl;
	

	return (0);
}