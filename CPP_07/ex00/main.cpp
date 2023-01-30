/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:09:59 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:23:05 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main (void)
{
	int un = 1;
	int deux = 2;
	std::cout << std::endl << std::endl;
	std::cout << BOLD << UNDER << "Test de moi :" << END;
	std::cout << std::endl << std::endl;

	std::cout << "un = " << un << std::endl;
	std::cout << "deux = " << deux << std::endl;

	std::cout << "SWAPITY SWAPITY BOO" << std::endl;
	::swap <int> (un, deux);

	std::cout << "un = " << un << std::endl;
	std::cout << "deux = " << deux << std::endl;

	std::cout << "which is bigger, 2 or 1 ?\n" << max<const int> (un, deux) << std::endl;
	std::cout << "which is smaller, 2 or 1 ?\n" << min<const int> (un, deux) << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << BOLD << UNDER << "Test du sujet :" << END;
	
	std::cout << std::endl << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
