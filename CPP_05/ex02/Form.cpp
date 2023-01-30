/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:34:28 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:20:58 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : fName("Unknown Scribler"), fGradeToSign(150), fGradeToExec(150), 
fApprovalStatus(false)
{
}

Form::Form(const std::string &name, int gradeToEx, int gradeToSign) 
: fName(name), fGradeToSign(gradeToSign), fGradeToExec(gradeToEx), 
 fApprovalStatus(false)
{
	if (gradeToEx < 1 || gradeToSign < 1)
		throw (GradeTooHighException ());
	else if (gradeToEx > 150 || gradeToSign > 150)
		throw (GradeTooLowException ());
	std::cout << YELLOW << BOLD << fName << GREEN 
	<<" was written with the sweat and blood of a young clerk who now lies motionless on the Place Beauveau cold floor"
	 << END << std::endl;
}

Form::Form(const Form &form) : fName(form.getName()), fGradeToSign(form.getSignGrade()), fGradeToExec(form.getExecGrade())
{
	*this = form;
}

Form::~Form()
{
	std::cout << YELLOW << BOLD << fName << RED
	<< " was shredded by Monica, the young intern"
	 << END << std::endl;
}

int					Form::getSignGrade() const
{
	return (fGradeToSign);
}

int					Form::getExecGrade() const
{
	return (fGradeToExec);
}

std::string			Form::getName() const
{
	return (fName);
}

std::string			Form::getApprovalStatusStr() const
{
	if (fApprovalStatus)
		return ("\033[32m\033[1mTrue\033[0m");
	else
		return ("\033[31m\033[1mFalse\033[0m");
}

bool			Form::getApprovalStatus() const
{
	return (fApprovalStatus);
}

void				Form::setApprovalStatus(bool status)
{
	if (status == true)
		fApprovalStatus = true;
	else
		fApprovalStatus = false;
}

void				Form::beSigned(Bureaucrat const & signer)
{
	if (this->getSignGrade() < signer.getGrade())
		throw (GradeTooLowToSign(signer, *this));
	else if (this->getApprovalStatus() == true)
	{
		std::cout << BOLD << this->getName() << END << 
		" has been signed already !" << std::endl;
		return ;
	}
	this->fApprovalStatus = true;
	std::cout << YELLOW << BOLD
	<< signer.getName() <<
	END << " : signed "
	<< BOLD << this->fName << END << std::endl;	
}

void				Form::execute(Bureaucrat const &executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw (GradeTooLowToExec(executor, *this));
	else if (this->getApprovalStatus() != true)
	{
		std::cout << BOLD << this->getName() << END << 
		" hasn't been signed, you gotta go throught the whole process again. See you in a month." << std::endl;
		return ;
	}
	std::cout << YELLOW << BOLD
	<< executor.getName() <<
	END << " : executed "
	<< BOLD << this->fName << END << std::endl;
}

Form 				&Form::operator=(const Form &form)
{
	this->fApprovalStatus = form.fApprovalStatus;
	return (*this);	
}

std::ostream 		&operator<<(std::ostream& out, const Form &form)
{
	std::string tmp;
	tmp = form.getName();
	tmp.append(" : \n- Necessary grade to execute : "); 
	tmp.append(std::to_string(form.getExecGrade()));
	tmp.append("\n- Necessary grade to sign : ");
	tmp.append(std::to_string(form.getSignGrade()));
	tmp.append("\n- Has been approved : ").append(form.getApprovalStatusStr());
	return (out << tmp);
}

const std::string	Form::GradeTooLowToExec::tooLowToExec() const throw()
{
	return (B.getName().append(" grade is too low to exec : ").append(F.getName()));
}

const std::string	Form::GradeTooLowToSign::tooLowToSign() const throw()
{
	return (B.getName().append(" grade is too low to sign : ").append(F.getName()));
}

const std::string 	Form::GradeTooHighException::tooHigh() const throw()
{
	return ("The Grade necessary to sign or execute this form is too high");
}
const std::string 	Form::GradeTooLowException::tooLow() const throw()
{
	return ("The Grade necessary to sign or execute this form is too low");	
}