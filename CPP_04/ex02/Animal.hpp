/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:50:58 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:39:47 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP
# define	ANIMAL_HPP

# include	<string>
# include	<iostream>
# include	"Brain.hpp"

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

class Animal
{
	protected	:

		std::string type;

	public		:

		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();

		virtual std::string		getType() const;
		virtual void			setType(std::string nType);
		virtual void			makeSound() const = 0;
		
		Animal & operator=(const Animal &animal);
};

#endif