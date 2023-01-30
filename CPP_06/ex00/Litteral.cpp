/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:59:25 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 17:38:29 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

Litteral::Litteral() : lChar(0), lInt(0), lFloat(0), lDouble(0)
{
	for (int i = 0; i < 4; i ++)
	{
		this->displayStatus[i] = impossible;
		this->type_array[i] = false;
	}
}

Litteral::Litteral(const std::string & param) : lParam(param)
{
	for (int i = 0; i < 4; i ++)
	{
		this->displayStatus[i] = impossible;
		this->type_array[i] = false;
	}
	typeFinder();
	switch (this->getType())
	{
		case 0 :
			convertFromChar();
			break;
		case 1 :
			convertFromInt();
			break;
		case 2 :
			convertFromFloat();
			break;
		case 3 :
			convertFromDouble();
			break;
		default:
			break;
	}
}

Litteral::Litteral(const Litteral &litt)
{
	*this = litt;
}

Litteral::~Litteral()
{
}

int			Litteral::getType() const
{
	for (int i = 0; i < 4; i ++)
	{
		if (type_array[i] == true)
			return (i);
	}
	return (wrongT);
}

char		Litteral::getChar() const {return (lChar);}

int			Litteral::getInt() const {return (lInt);}

float		Litteral::getFloat() const {return (lFloat);}

double		Litteral::getDouble() const {return (lDouble);}

void		Litteral::convertFromChar()
{
	lChar = lParam[0];
	displayStatus[charT] = displayable;

	lInt = static_cast<int>(lChar);
	displayStatus[intT] = displayable;
	lFloat = static_cast<float>(lChar);
	displayStatus[floatT] = displayable;
	lDouble = static_cast<double> (lChar);
	displayStatus[doubleT] = displayable;
}
void		Litteral::convertFromInt()
{
	int i;

	lInt = std::atoi(lParam.c_str());
	std::istringstream(lParam) >> i;
	if (lInt != i)
		return ;
	else
	{
		displayStatus[intT] = displayable;
		if (lInt > 31 && lInt < 127)
		{
			lChar = (char)lInt;
			displayStatus[charT] = displayable;
		}
		else if ((lInt >= 0 && lInt < 32)
			|| (lInt > 126 && lInt < 255))
			displayStatus[charT] = nonDisplayable;
		lFloat = static_cast<float> (lInt);
		lDouble = static_cast<double> (lInt);
		displayStatus[doubleT] = displayable;
		displayStatus[floatT] = displayable;
	}
}
void		Litteral::convertFromFloat()
{
	lFloat =  std::atof(lParam.c_str());
	displayStatus[floatT] = displayable;
	if (lFloat > INT_MAX || lFloat < INT_MIN || lParam == "nan" || lParam == "nanf")
	{
		displayStatus[intT] = impossible;
		displayStatus[charT] = impossible;
	}
	else
	{
		lInt = static_cast <int> (lFloat);
		displayStatus[intT] = displayable;
		if (lInt > 31 && lInt < 127)
		{
			lChar = static_cast <char> (lInt);
			displayStatus[charT] = displayable;
		}
		else if ((lInt >= 0 && lInt < 32)
			|| (lInt > 126 && lInt < 255))
			displayStatus[charT] = nonDisplayable;
	}
	lDouble = static_cast<double> (lFloat);
	displayStatus[doubleT] = displayable;
}
void		Litteral::convertFromDouble()
{
	lDouble = std::atof(lParam.c_str());
	displayStatus[doubleT] = displayable;
	if (lDouble > INT_MAX || lDouble < INT_MIN || lParam == "nan" || lParam == "nanf")
	{
		displayStatus[intT] = impossible;
		displayStatus[charT] = impossible;
	}
	else
	{
		lInt = static_cast<int>(lDouble);
		displayStatus[intT] = displayable;
		if (lInt > 31 && lInt < 127)
		{
			lChar = static_cast <char> (lInt);
			displayStatus[charT] = displayable;
		}
		else if ((lInt >= 0 && lInt < 32)
			|| (lInt > 126 && lInt < 255))
			displayStatus[charT] = nonDisplayable;
	}
	lFloat = static_cast<float>(lDouble);
	displayStatus[floatT] = displayable;
}

void		Litteral::typeFinder()
{
	bool 	(Litteral::*fct_ptr[4])(void) = {&Litteral::isChar, &Litteral::isInt, &Litteral::isFloat, &Litteral::isDouble};
	for (int i = 0; i < 4; i ++)
	{
		type_array[i] = (this->*fct_ptr[i])();
		if (type_array[i])
			break;
	}
}

bool		Litteral::isChar()
{
	if ((lParam.length() == 1)
	&& (lParam[0] >= '0' && lParam[0] <= '9'))
		return (false);
	if (lParam.length() == 1 && lParam[0] > 0 && lParam[0] <= 127)
		return (true);
	else
		return (false);
}

bool		Litteral::isInt()
{
	int len = lParam.length();
	for (int i = 0; i < len; i ++)
	{
		if ((lParam[i] == '-' || lParam[i] == '+')
			&& (len > 1 && i == 0))
			i ++;
		else if (lParam[i] < '0' || lParam[i] > '9')
			return (false);
	}
	return (true);
}

bool		Litteral::isFloat()
{
	int len = lParam.length();
	int ptCt = 0;
	int eCt = 0;

	if (lParam == "+inff" || lParam == "-inff" || lParam == "nanf"
		|| lParam == "inff")
		return (true);
	for (int i = 0; i < len; i ++)
	{
		if ((lParam[i] == '-' || lParam[i] == '+')
			&& (len > 1 && i == 0))
			i ++;
		else if ((lParam[i] == 'f' || lParam[i] == 'F')
			&& (i == len - 1 && len != 1))
			return (true);
		else if (lParam[i] == '.' && ptCt <= 1)
			ptCt ++;
		else if (lParam[i] == 'e' && ptCt <= 1)
			eCt ++;
		else if (lParam[i] < '0' || lParam[i] > '9')
			return (false);
		if (eCt > 1 || ptCt > 1)
			return (false);
	}
	return (false);
}

bool		Litteral::isDouble()
{
	int len = lParam.length();
	int ptCt = 0;
	int eCt = 0;

	if (lParam == "+inf" || lParam == "-inf" || lParam == "nan"
		|| lParam == "inf")
		return (true);
	for (int i = 0; i < len; i ++)
	{
		if ((lParam[i] == '-' || lParam[i] == '+')
			&& (len > 1 && i == 0))
			i ++;
		else if (lParam[i] == '.' && ptCt <= 1)
			ptCt ++;
		else if (lParam[i] == 'e' && ptCt <= 1)
			eCt ++;
		else if (lParam[i] < '0' || lParam[i] > '9')
			return (false);
		if (eCt > 1 || ptCt > 1)
			return (false);
	}
	return (true);	
}

Litteral	&Litteral::operator=(const Litteral &litt)
{
	this->lParam = litt.lParam;
	this->lChar = litt.lChar;
	this->lInt = litt.lInt;
	this->lFloat = litt.lFloat;
	this->lDouble = litt.lDouble;
	for (int i = 0; i < 4; i ++)
		this->type_array[i] = litt.type_array[i];
	return (*this);
}

t_display	Litteral::getDisplayStatus(unsigned int requestedIndex) const
{
	if (requestedIndex >= 4)
	{
		std::cerr << "invalid index requested in 'getDisplayStatus', 'impossible' returned" << std::endl;
		return (impossible);
	}
	return (displayStatus[requestedIndex]);
}
