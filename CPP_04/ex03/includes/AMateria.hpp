/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:33 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 13:55:50 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AMATERIA_HPP
# define	AMATERIA_HPP

# define	RESET   "\033[0;0m"
# define	ERASE   "\033[2K\r"
# define	GREY    "\033[30m"
# define	RED     "\033[31m"
# define	GREEN   "\033[32m"
# define	YELLOW  "\033[33m"
# define	BLUE    "\033[34m"
# define	PINK    "\033[35m"
# define	CYAN    "\033[36m"
# define	WHITE   "\033[37m"
# define	BOLD    "\033[1m"
# define	UNDER   "\033[4m"
# define	SUR     "\033[7m"
# define	END     "\033[0m"
# define	CENTER  "\033[60G"

# include	<string>
# include	<iostream>
# include	"ICharacter.hpp"

class AMateria
{
	protected	:

		std::string	mType;
		size_t		mId;
		AMateria();

	public		:

		AMateria(std::string const & type);
		AMateria(const AMateria &materia);
		virtual ~AMateria();

		AMateria & operator=(const AMateria &materia);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif