/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:54:53 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 11:28:48 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LITTERAL_HPP
# define	LITTERAL_HPP

# include	<string>
# include	<iostream>
# include	<cstdlib>
# include	<stdlib.h>
# include	<sstream>
# include	<float.h>
#include	<iomanip>


typedef enum e_type
{
	charT,
	intT,
	floatT,
	doubleT,
	wrongT
	
}	t_type;

typedef enum e_display
{
	displayable,
	nonDisplayable,
	impossible
	
}	t_display;

class Litteral
{
	private	:

		std::string	lParam;
		char		lChar;
		int			lInt;
		float		lFloat;
		double		lDouble;

		bool		type_array[4];
		t_display	displayStatus[4];
		
		Litteral();
		Litteral(const Litteral &litt);

		Litteral	&operator=(const Litteral &litt);

	public	:

		Litteral(const std::string & param);
		~Litteral();

		int			getType() const;
		t_display	getDisplayStatus(unsigned int requestedIndex) const;
		void		convertFromChar();
		void		convertFromInt();
		void		convertFromFloat();
		void		convertFromDouble();
		char		getChar() const ;
		int			getInt() const ;
		float		getFloat() const ;
		double		getDouble() const ;

		void		typeFinder();
		bool		isChar();
		bool		isInt();
		bool		isFloat();
		bool		isDouble();
};

#endif