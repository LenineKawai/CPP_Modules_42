/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:27:18 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/19 16:50:59 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << RED << "Default DESTRUCTOR called" << END << std::endl;
	return ;
}

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << GREEN << "Default Constructor called" << END << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &fixed) : _fixed_value(fixed._fixed_value)
{
	std::cout << YELLOW << "Copy Constructor called" << END << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << "operator = called" << std::endl;
		this->_fixed_value = fixed.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (_fixed_value);
}

void	Fixed::setRawBits(const int raw)
{
	_fixed_value = raw;
}

