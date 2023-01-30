/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:37:04 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/21 13:54:56 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
		this->_fixed_value = fixed.getRawBits();
	return (*this);
}

Fixed& Fixed::operator++()
{
	_fixed_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	operator++();
	return (old);
}

Fixed& Fixed::operator--()
{
	_fixed_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	operator--();
	return (old);
}

Fixed Fixed::operator+(const Fixed& nb1) const
{
	Fixed old(*this);
	old._fixed_value += nb1._fixed_value;
	return (old);
}

Fixed Fixed::operator-(const Fixed& nb1) const
{
	Fixed old(*this);
	old._fixed_value -= nb1._fixed_value;
	return (old);
}

Fixed Fixed::operator*(const Fixed& nb1) const
{
	Fixed old(this->toFloat() * nb1.toFloat());
	return (old);
}

Fixed Fixed::operator/(const Fixed& nb1) const
{
	Fixed old(this->toFloat() / nb1.toFloat());
	return (old);
}

bool	Fixed::operator==(const Fixed& nb) const
{
	if (_fixed_value == nb._fixed_value)
		return (true);
	else
		return (false);
}
bool	Fixed::operator!=(const Fixed& nb) const
{
	if (_fixed_value != nb._fixed_value)
		return (true);
	else
		return (false);
}
bool	Fixed::operator<=(const Fixed& nb) const
{
	if (_fixed_value <= nb._fixed_value)
		return (true);
	else
		return (false);
}
bool	Fixed::operator>=(const Fixed& nb) const
{
	if (_fixed_value >= nb._fixed_value)
		return (true);
	else
		return (false);
}
bool	Fixed::operator<(const Fixed& nb) const
{
	if (_fixed_value < nb._fixed_value)
		return (true);
	else
		return (false);
}
bool	Fixed::operator>(const Fixed& nb) const
{
	if (_fixed_value > nb._fixed_value)
		return (true);
	else
		return (false);
}

//TO DO = > < >= <= == !=