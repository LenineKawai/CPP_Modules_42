/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:27:06 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/24 10:45:24 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EASYFIND_HPP
# define	EASYFIND_HPP

# include	<string>
# include	<iostream>
# include	<algorithm>
# include	<vector>

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
typename T::iterator	easyfind(T &haystack, int needle)
{
	typename T::iterator it;
	it = std::find(std::begin(haystack), std::end(haystack), needle);
	return (it);
}

#endif
