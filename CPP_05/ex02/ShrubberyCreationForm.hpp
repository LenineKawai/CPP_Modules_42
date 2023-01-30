/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:34:40 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/10 18:43:35 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SHRUBBERYCREATIOMFORM_HPP
# define	SHRUBBERYCREATIOMFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreatinForm : public Form
{
	private :
		std::string	scfTarget;

		ShrubberyCreatinForm();
	
	public:
		ShrubberyCreatinForm(const std::string &target);
		ShrubberyCreatinForm(const ShrubberyCreatinForm & scf);
		~ShrubberyCreatinForm();

		std::string		getTarget() const;
		void			setTarget(std::string &newTarget);
		void			execute(Bureaucrat const & executor) const;

		ShrubberyCreatinForm & operator=(const ShrubberyCreatinForm & scf);
};


#endif