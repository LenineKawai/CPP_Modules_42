/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:27:18 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/21 13:55:10 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed()
{
	_fixed_value = 0;
	return ;
}

Fixed::Fixed(const Fixed &fixed) : _fixed_value(fixed._fixed_value)
{
	return ;
}

Fixed::Fixed(const int value)
{
	this->_fixed_value = (value << _fractionnal_bits);
	return ;
}

Fixed::Fixed(const float value)
{
	this->_fixed_value = roundf(value * (1 << _fractionnal_bits));
	return ;
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

Fixed&	Fixed::min(Fixed& v1, Fixed& v2)
{
	if (v1.getRawBits() < v2.getRawBits())
		return (v1);
	else
		return (v2);
}

const Fixed&	Fixed::min(const Fixed& v1,const Fixed& v2)
{
	if (v1.getRawBits() < v2.getRawBits())
		return (v1);
	else
		return (v2);
}

Fixed&	Fixed::max(Fixed& v1, Fixed& v2)
{
	if (v1.getRawBits() > v2.getRawBits())
		return (v1);
	else
		return (v2);
}

const Fixed&	Fixed::max(const Fixed& v1,const Fixed& v2)
{
	if (v1.getRawBits() > v2.getRawBits())
		return (v1);
	else
		return (v2);
}