/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:08:41 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/10 15:32:03 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	{
		try
		{
			Bureaucrat Michel("Mitch'", -2147483648);
		}
		catch(Bureaucrat::GradeTooHighException & e)
		{
			std::cout << BOLD << e.tooHigh() << END << std::endl;
		}
		catch(Bureaucrat::GradeTooLowException & e)
		{
			std::cout << BOLD << e.tooLow() << END << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat Emmanuel("Manu' la Tambouille", 1);
			Bureaucrat Castamerde("Macumba man", 150);
		}
		catch(Bureaucrat::GradeTooHighException & e)
		{
			std::cout << BOLD << e.tooHigh() << END << std::endl;
		}
		catch(Bureaucrat::GradeTooLowException & e)
		{
			std::cout << BOLD << e.tooLow() << END << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat Emmanuel("Manu' la Tambouille", 1);
		Bureaucrat Castamerde("Macumba man", 150);
		try
		{
			// std::cout << Emmanuel.getName() << " is grade : " << Emmanuel.getGrade() << std::endl;
			// Emmanuel.decrementGrade();
			// std::cout << Emmanuel.getName() << " is grade : " << Emmanuel.getGrade() << std::endl;
			// Emmanuel.incrementGrade();
			// std::cout << Emmanuel.getName() << " is grade : " << Emmanuel.getGrade() << std::endl;
			// Emmanuel.incrementGrade();
			
			std::cout << Castamerde << std::endl;
			Castamerde.incrementGrade();
			std::cout << Castamerde  << std::endl;
			Castamerde.decrementGrade();
			std::cout << Castamerde << std::endl;
			Castamerde.decrementGrade();
		}
		catch(Bureaucrat::GradeTooHighException & e)
		{
			std::cout << BOLD << e.tooHigh() << END << std::endl;
		}
		catch(Bureaucrat::GradeTooLowException & e)
		{
			std::cout << BOLD << e.tooLow() << END << std::endl;
		}
	}
	return (0);
}