/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:20:20 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 16:27:11 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "This program only accept one parameter, which will stand for : " << std::endl
		<< "- a char litteral. (ex : 'c' 'a')" << std::endl
		<< "- a int litteral. (ex : '0' '-42')" << std::endl
		<< "- a float litteral. (ex : '-4.2f' '4.2f')" << std::endl
		<< "- a double litteral. (ex : '0.0' '4.2')" << std::endl;
		return (1);
	}
	std::string param = av[1];
	if (param[0] == 0)
	{
		std::cout << "argv[1] is an empty string" << std::endl;
		return (1);
	}

	Litteral l(param);

	switch (l.getType())
	{
		case 0 :
			std::cout << "param is of type : char" << std::endl;
			break;
		case 1 :
			std::cout << "param is of type : int" << std::endl;
			break;
		case 2 :
			std::cout << "param is of type : float" << std::endl;
			break;
		case 3 :
			std::cout << "param is of type : double" << std::endl;
			break;
		default:
			std::cout << "param is of unknown type" << std::endl;
			return (1);
	}
	
	switch (l.getDisplayStatus(charT))
	{
		case displayable:
			std::cout << "char: " << l.getChar() << std::endl;
			break;
		case nonDisplayable:
			std::cout << "char: Non Displayable" << std::endl;
			break;
		
		case impossible:
			std::cout << "char: Impossible" << std::endl;
			break;
		default:
			break;
	}
	switch (l.getDisplayStatus(intT))
	{
		case displayable:
			std::cout << "int: " << l.getInt() << std::endl;
			break;
		case nonDisplayable:
			std::cout << "int: Non Displayable" << std::endl;
			break;
		
		case impossible:
			std::cout << "int: Impossible" << std::endl;
			break;
		default:
			break;
	}
	switch (l.getDisplayStatus(floatT))
	{
		case displayable:
			std::cout << "float: " << l.getFloat() <<
			((long int)l.getDouble() == l.getDouble() ? ".0" : "") << "f" << std::endl;
			break;
		case nonDisplayable:
			std::cout << "float: Non Displayable" << std::endl;
			break;
		
		case impossible:
			std::cout << "float: Impossible" << std::endl;
			break;
		default:
			break;
	}
	switch (l.getDisplayStatus(doubleT))
	{
		case displayable:
			std::cout << "double: " << l.getDouble() <<
			((long int)l.getDouble() == l.getDouble() ? ".0" : "") << std::endl;
			break;
		case nonDisplayable:
			std::cout << "double: Non Displayable" << std::endl;
			break;
		
		case impossible:
			std::cout << "double: Impossible" << std::endl;
			break;
		default:
			break;
	}

}

#include <typeinfo>

