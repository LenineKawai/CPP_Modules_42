/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:46:22 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:25:53 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 45, 72), rrfTarget("Une terroriste d'extreme droite antisemite qui s'est bien conduit en zonz")
{
	std::cout << GREY << BOLD << "Default Robotomy Form Constructor Called"
	<< END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 45, 72), rrfTarget(target)
{
	std::cout << BLUE << BOLD << "Robotomy Form Constructor Called"
	<< END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rrf)
{
	*this = rrf;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "The once Robotomy Request Form is now unreadable" << END << std::endl;
}

std::string		RobotomyRequestForm::getTarget() const
{
	return (rrfTarget);
}
void			RobotomyRequestForm::setTarget(std::string &newTarget)
{
	rrfTarget = newTarget;
}		

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw (GradeTooLowToExec(executor, *this));
	else if (this->getApprovalStatus() != true)
	{
		std::cout << BOLD << this->getName() << END << 
		" hasn't been signed, you gotta go throught the whole process again. See you in a month." << std::endl;
		return ;
	}
	
	std::srand(std::time(0));

	std::cout << YELLOW << BOLD
	<< executor.getName() <<
	END << " : executed "
	<< BOLD << this->getName() << END << std::endl;
	if (std::rand() % 2 != 0)
		std::cout << BOLD << "BZOOT BZUT *** " << this->getTarget() << " HAS BEEN ROBOTOMIZED *** BZZZZZZT"
		<< END << std::endl;
	else
		std::cout << BOLD << "Robotomization FAILED on " << this->getTarget() 
		<< END << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rrf)
{
	this->rrfTarget = rrf.rrfTarget;
	return (*this);	
}