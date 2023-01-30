/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:49:27 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/21 13:59:57 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed nb(7.1001000000001f);
	Fixed nb2(-850);
	Fixed nb3(-4.44f);
	Fixed nb4;
	Fixed const nb5(nb);

	std::cout << "NB raw bits : " << CYAN << nb.getRawBits() << END << std::endl;
	std::cout << "NB2 raw bits : " << CYAN << nb2.getRawBits() << END << std::endl;
	std::cout << "NB3 raw bits : " << CYAN << nb3.getRawBits() << END << std::endl;
	std::cout << "NB4 raw bits : " << CYAN << nb4.getRawBits() << END << std::endl;
	std::cout << "NB5 raw bits : " << CYAN << nb5.getRawBits() << END << std::endl << std::endl;

	std::cout << "NB in cout using << operator : " << YELLOW << nb << END << std::endl;
	std::cout << "NB2 in cout using << operator : " << YELLOW << nb2 << END << std::endl;
	std::cout<< "NB3 in cout using << operator : "  << YELLOW << nb3 << END << std::endl;
	std::cout<< "NB4 in cout using << operator : "  << YELLOW << nb4 << END << std::endl;
	std::cout<< "NB5 in cout using << operator : "  << YELLOW << nb5 << END << std::endl << std::endl;

	nb = nb2;
	nb4.setRawBits(256);
	std::cout << "NB take NB2 value, NB4 raw bit value is set to : " << CYAN << nb4.getRawBits() << END << std::endl << std::endl;

	std::cout << "NB in cout using << operator : " << YELLOW << nb << END << std::endl;
	std::cout << "NB2 in cout using << operator : " << YELLOW << nb2 << END << std::endl;
	std::cout<< "NB3 in cout using << operator : "  << YELLOW << nb3 << END << std::endl;
	std::cout<< "NB4 in cout using << operator : "  << YELLOW << nb4 << END << std::endl;
	std::cout<< "NB5 in cout using << operator : "  << YELLOW << nb5 << END << std::endl << std::endl;


	std::cout << "NB toInt : " << GREEN << nb.toInt() << END << std::endl;
	std::cout << "NB2 toInt : " << GREEN << nb2.toInt() << END << std::endl;
	std::cout << "NB3 toInt : " << GREEN << nb3.toInt() << END << std::endl;
	std::cout << "NB4 toInt : " << GREEN << nb4.toInt() << END << std::endl;
	std::cout << "NB5 toInt : " << GREEN << nb5.toInt() << END << std::endl << std::endl;

	std::cout << "NB toFloat : " << YELLOW << nb.toFloat() << END << std::endl;
	std::cout << "NB2 toFloat : " << YELLOW << nb2.toFloat() << END << std::endl;
	std::cout << "NB3 toFloat : " << YELLOW << nb3.toFloat() << END << std::endl;
	std::cout << "NB4 toFloat : " << YELLOW << nb4.toFloat() << END << std::endl;
	std::cout << "NB5 toFloat : " << YELLOW << nb5.toFloat() << END << std::endl << std::endl;
	// std::cout << nb.getRawBits() << std::endl;
	return 0;
}