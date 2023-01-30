/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:36:43 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:26:09 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <cstdio>
#include <fstream>

ShrubberyCreatinForm::ShrubberyCreatinForm() : Form("ShrubberyForm", 137, 145), scfTarget("Une minorite bien pratique")
{
	std::cout << GREY << BOLD << "Default Shrub'Shrub Form Constructor Called"
	<< END << std::endl;
}

ShrubberyCreatinForm::ShrubberyCreatinForm(const std::string &target) : Form("ShrubberyForm", 137, 145), scfTarget(target)
{
	std::cout << CYAN << BOLD << "Shrub'Shrub Form Constructor Called"
	<< END << std::endl;
}

ShrubberyCreatinForm::ShrubberyCreatinForm(const ShrubberyCreatinForm & scf)
{
	*this = scf;
}

ShrubberyCreatinForm::~ShrubberyCreatinForm()
{
	std::cout << RED << "The once Shrubbery Creation Form is now unreadable" << END << std::endl;
}

std::string		ShrubberyCreatinForm::getTarget() const
{
	return (scfTarget);
}
void			ShrubberyCreatinForm::setTarget(std::string &newTarget)
{
	scfTarget = newTarget;
}

void			ShrubberyCreatinForm::execute(Bureaucrat const & executor) const
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

	std::ofstream file;

	file.open(this->getTarget().append("_shrubbery"));
	file << "   o   \n  ooo  \n-ooooo-\n ooooo \n  ooo  \n   |   \n   |   \n   |   \n   |   \n___|___\n";
	file.close();
	
}

ShrubberyCreatinForm & ShrubberyCreatinForm::operator=(const ShrubberyCreatinForm & scf)
{
	this->scfTarget = scf.scfTarget;
	return (*this);	
}