/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:20:15 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/19 16:44:07 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define	FIXED_HPP
#include	<string>
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

class Fixed
{
	private :
		int					_fixed_value;
		static const int	_fractionnal_bits = 8;
	public :
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator=(const Fixed &fixed);
		int		getRawBits( void ) const;
		void	setRawBits(const int raw);
};

#endif