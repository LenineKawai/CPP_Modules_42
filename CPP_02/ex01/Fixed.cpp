/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:27:18 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/20 13:17:55 by mgolinva         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	this->_fixed_value = (value << _fractionnal_bits);
	std::cout << CYAN << "Const int Constructor called" << END << std::endl;
	return ;
}

Fixed::Fixed(const float value)
{
	this->_fixed_value = roundf(value * (1 << _fractionnal_bits));
	std::cout << PINK << "Const float Constructor called" << END << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << BOLD << "Operator '=' called" << END << std::endl;
		this->_fixed_value = fixed.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (_fixed_value);
}

void	Fixed::setRawBits(const int raw)
{
	_fixed_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return((float)_fixed_value / (float)(1 << Fixed::_fractionnal_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed_value >> Fixed::_fractionnal_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}