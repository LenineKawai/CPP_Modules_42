/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:52 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:18:38 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ARRAY_HPP
# define	ARRAY_HPP

#include	<string>
#include	<iostream>
#include	<exception>
# include	<sstream>

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

template <typename E>
class Array
{
	private	:
		E		*aArray;
		size_t	aSize;
	public	:
		Array() : aArray(new E[0]), aSize(0) {};
		Array(int n) : aArray(new E[n]), aSize(static_cast<size_t> (n)) {};
		Array(const Array & array) {*this = array;};
		~Array() {delete[] aArray;};

		size_t	size() const {return (aSize);};

		class oobIndexException : public std::exception
		{
			private	:
				const int index;
				oobIndexException();
			public	:
				oobIndexException(int i) : index(i) {};
				const std::string	oob() const throw() 
				{
					std::stringstream ss;
					std::string str;

					ss << index;
					ss >> str;
					str.append(" is out of bound");
					return (str);	
				};
		};
	
		Array	&operator=(const Array & array)
		{
			delete[] this->aArray;
			this->aArray = new E[array.aSize];
			for (size_t i = 0; i < array.aSize; i ++)
				this->aArray[i] = array.aArray[i];
			this->aSize = array.aSize;
			return (*this);
		}
		E		&operator[](int index) const
		{
			if (index < 0 || index >= static_cast<int>(aSize))
			{
				throw (oobIndexException(index));
			}
			return (aArray[index]);
		}
};

#endif
