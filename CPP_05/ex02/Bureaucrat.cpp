/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:54:48 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:25:11 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : bName("Unknown Scribler"), bGrade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : bName(name), bGrade(grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	std::cout << YELLOW << BOLD << bName << GREEN 
	<< " the Bureaucrat spawned from the gates of Hell(ENA)"
	 << END << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &buros) : bName(buros.getName())
{
	*this = buros;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << YELLOW << BOLD << bName << RED
	<< " the Bureaucrat Died in a Exctinction Rebellion bombing"
	 << END << std::endl;
}

int					Bureaucrat::getGrade() const
{
	return (bGrade);
}

std::string			Bureaucrat::getName() const
{
	return (bName);
}

void				Bureaucrat::incrementGrade()
{
	if (bGrade - 1 < 1)
		throw (GradeTooHighException());
	else if (bGrade - 1 > 150)
		throw (GradeTooLowException());
	bGrade -- ;
}

void				Bureaucrat::decrementGrade()
{
	if (bGrade + 1 < 1)
		throw (GradeTooHighException());
	else if (bGrade + 1 > 150)
		throw (GradeTooLowException());
	bGrade ++;
}

const std::string	Bureaucrat::GradeTooLowException::tooLow() const throw()
{
	return ("Bureaucrat Grade is too low");
}

const std::string	Bureaucrat::GradeTooHighException::tooHigh() const throw()
{
	return ("Bureaucrat Grade is too High");
}

void				Bureaucrat::signForm(Form &form)
{
	Form *test = NULL;
	if (&form == test)
		return ;
	form.beSigned(*this);
}

void				Bureaucrat::executeForm(Form &form)
{
	Form *test = NULL;
	if (&form == test)
		return ;
	form.execute(*this);
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &buros)
{
	this->bGrade = buros.bGrade;
	return (*this) ;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &buros)
{
	return (out << buros.getName().append(", bureaucrat grade : ").append(std::to_string(buros.getGrade())));
}