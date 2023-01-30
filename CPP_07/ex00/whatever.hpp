/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:02:59 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:23:13 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WHATEVER_HPP
# define	WHATEVER_HPP

# include	<string>
# include	<iostream>

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
void swap(T &arg1, T &arg2)
{
	T tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T min(const T &arg1, const T &arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

template <typename T>
T max(const T &arg1, const T &arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif
