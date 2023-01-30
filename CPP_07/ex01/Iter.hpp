/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:00:07 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:27:43 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ITER_HPP
# define	ITER_HPP

#include	<string>
#include	<iostream>

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

template <typename T>
void PlusPlus(T &elemToPlusPlus)
{
	elemToPlusPlus += 1;
}

template <typename T>
void PrintPrint(T &elemToPrintPrint)
{
	std::cout << elemToPrintPrint << std::endl;
}

template <typename R>
void	iter(R *arrayAddress, size_t arrayLen, void (funPtr)(R &))
{
	size_t i = 0;
	
	while (i < arrayLen)
	{
		funPtr(*arrayAddress);
		arrayAddress ++;
		i ++;
	}
}

#endif
