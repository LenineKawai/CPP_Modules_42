/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:08:41 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:26:44 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
	Intern		monica;
	Bureaucrat	bill("Bill", 1);

	std::cout << std::endl << std::endl;

	Form *newForm = monica.makeForm("PresidentialPardon", "his own cocain addict brother");
	bill.signForm(*newForm);
	bill.executeForm(*newForm);
	
	std::cout << std::endl << std::endl;

	Bureaucrat	PierreRabi("Pierro l'homophobe", 20);

	std::cout << std::endl << std::endl;

	Form *newForm2 = monica.makeForm("ShrurryForm", "LaTerreNotreMere");
	PierreRabi.signForm(*newForm2);
	PierreRabi.executeForm(*newForm2);
	
	std::cout << std::endl << std::endl;

	Bureaucrat	UneAmateurdHugoBoss("Heinrich", 150);

	std::cout << std::endl << std::endl;

	Form *newForm3 = monica.makeForm("RobotomyRequestForm", "un opposant politique");
	try
	{
		UneAmateurdHugoBoss.signForm(*newForm3);
		UneAmateurdHugoBoss.executeForm(*newForm3);
	}
	catch(const Form::GradeTooLowToExec& e)
	{
		std::cout << e.tooLowToExec() << '\n';
	}
	catch(const Form::GradeTooLowToSign& e)
	{
		std::cout << e.tooLowToSign() << '\n';
	}

	std::cout << std::endl << std::endl;

	delete newForm;
	delete newForm2;	
	delete newForm3;	
	return (0);
}