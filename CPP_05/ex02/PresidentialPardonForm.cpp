/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:40:50 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:25:49 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 5, 25), ppfTarget("Une terroriste d'extreme droite antisemite qui s'est bien conduit en zonz")
{
	std::cout << GREY << BOLD << "Default Pres'Pard Form Constructor Called"
	<< END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardon", 5, 25), ppfTarget(target)
{
	std::cout << PINK << BOLD << "Pres'Pard Form Constructor Called"
	<< END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & ppf)
{
	*this = ppf;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "The once Presidential Pardon Form is now unreadable" << END << std::endl;
}

std::string		PresidentialPardonForm::getTarget() const
{
	return (ppfTarget);
}
void			PresidentialPardonForm::setTarget(std::string &newTarget)
{
	ppfTarget = newTarget;
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	<< BOLD << this->getName() << END << std::endl;
	std::cout << BOLD << this->getTarget() << " has been pardonned by Zaphod Beeblebrox"
	<< END << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & ppf)
{
	this->ppfTarget = ppf.ppfTarget;
	return (*this);	
}