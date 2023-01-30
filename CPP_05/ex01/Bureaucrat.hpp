/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */

/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:54:38 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:54:39 by mgolinva         ###   ########.fr       */
/*                                                                            */

/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# define RESET   "\033[0;0m"
# define ERASE   "\033[2K\r"
# define GREY    "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define PINK    "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define BOLD    "\033[1m"
# define UNDER   "\033[4m"
# define SUR     "\033[7m"
# define END     "\033[0m"
# define CENTER  "\033[60G"

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:

	const std::string 	bName;
	int		bGrade;

public:

	Bureaucrat();
	Bureaucrat(const Bureaucrat &buros);
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();


	int					getGrade() const;
	std::string			getName() const;
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form &form);
	
	Bureaucrat & operator=(const Bureaucrat &buros);

	class GradeTooLowException : public std::exception
	{
		public :

			const std::string	tooLow() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public :

			const std::string	tooHigh() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &buros);

#endif