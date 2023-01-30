/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:08:41 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/10 15:52:27 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	try
	{
		Bureaucrat	Philippe ("Filou The Blue Colar", 150);
		Bureaucrat	Micron ("Neo-Liberal Dumbfuck in Chief", 1);
		Form 		eatTheRich("Eat The Rich", 1, 1);
		Form		taxRelief("Tax Relief on capital's profits", 10, 1);


		std::cout << std::endl;

		std::cout << Philippe << std::endl;
		std::cout << Micron << std::endl;
		std::cout << eatTheRich << std::endl;
		std::cout << taxRelief << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
		try
		{
			Micron.signForm(taxRelief);
		}
		catch (Form::GradeTooLowToExec &g)
		{
			std::cout << BOLD << g.tooLowToExec() << END << std::endl;
		}
		catch (Form::GradeTooLowToSign &g)
		{
			std::cout << BOLD << g.tooLowToSign() << END << std::endl;
		}
		std::cout << std::endl;
		
		std::cout << BOLD << "After Micro has signed TaxRelief form, form status is :" << END << std::endl;

		std::cout << taxRelief << std::endl << std::endl;



		std::cout << "Philippe tries to sign eatTheRich" << std::endl;
		try
		{
			Philippe.signForm(eatTheRich);
		}
		catch (Form::GradeTooLowToExec &g)
		{
			std::cout << BOLD << g.tooLowToExec() << END << std::endl;
		}
		catch (Form::GradeTooLowToSign &g)
		{
			std::cout << BOLD << g.tooLowToSign() << END << std::endl;
		}
		std::cout <<"Philippe overthrow Micron and get it's job" << std::endl;
		Philippe = Micron;
		std::cout << "Then he tries to sign a eatTheRich form" << std::endl;
		
		try
		{
			Philippe.signForm(eatTheRich);
		}
		catch (Form::GradeTooLowToExec &g)
		{
			std::cout << BOLD << g.tooLowToExec() << END << std::endl;
		}
		catch (Form::GradeTooLowToSign &g)
		{
			std::cout << BOLD << g.tooLowToSign() << END << std::endl;
		}
		std::cout << std::endl;
		std::cout << BOLD << "After Philou has signed eatTheRich form, form status is :" << END << std::endl;
		std::cout << eatTheRich << std::endl << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cout << e.tooHigh() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << e.tooLow() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.tooHigh() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.tooLow() << std::endl;
	}

	return (0);
}