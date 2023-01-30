/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:28:43 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/11 11:34:09 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP
# define	FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	fName;
	const int			fGradeToSign;
	const int			fGradeToExec;
	bool				fApprovalStatus;
	

public:

	Form();
	Form(const std::string &name, int gradeToEx, int gradeToSign);
	Form(const Form &form);
	~Form();
	
	Form & operator=(const Form &form);

	int				getSignGrade() const;
	int				getExecGrade() const;
	std::string		getName() const;
	std::string		getApprovalStatusStr() const;
	bool			getApprovalStatus() const;
	void			setApprovalStatus(bool status);
	void			beSigned(Bureaucrat const & signer);


	class GradeTooLowToSign : public std::exception
	{
		private	:
			const Form			&F;
			const Bureaucrat	&B;

		public	: 
			GradeTooLowToSign(const Bureaucrat &b, const Form &f) : F(f) , B(b){};	
			const std::string tooLowToSign() const throw();
	};
	class GradeTooLowToExec : public std::exception
	{
		private	:
			const Form			&F;
			const Bureaucrat	&B;
			
		public	: 

			GradeTooLowToExec(const Bureaucrat &b, const Form &f) : F(f) , B(b){};	
			const std::string tooLowToExec() const throw();
	};
	class GradeTooHighException  : public std::exception
	{
		public	: 

			const std::string tooHigh() const throw();
	};
	class GradeTooLowException  : public std::exception
	{
		public	: 

			const std::string tooLow() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form &form);

#endif