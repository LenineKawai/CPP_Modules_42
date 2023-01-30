/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:29:47 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/10 18:43:29 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PRESIDENTALPARDONFORM_HPP
# define	PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string ppfTarget;

		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm & ppf);
		~PresidentialPardonForm();

		std::string		getTarget() const;
		void			setTarget(std::string &newTarget);
		void			execute(Bureaucrat const & executor) const;

		PresidentialPardonForm & operator=(const PresidentialPardonForm & ppf);
};


#endif