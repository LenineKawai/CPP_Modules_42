/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:33:31 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/10 18:33:10 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string rrfTarget;
		RobotomyRequestForm();
	
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm & rrf);
		~RobotomyRequestForm();

		std::string		getTarget() const;
		void			setTarget(std::string &newTarget);
		void			execute(Bureaucrat const & executor) const;

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rrf);
};


#endif