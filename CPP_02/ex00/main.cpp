/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:49:27 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/21 14:04:23 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed nb;
	Fixed nb2(nb);
	Fixed nb3;

	nb3 = nb2;
	
	std::cout << nb.getRawBits() << std::endl;
	std::cout << nb2.getRawBits() << std::endl;
	std::cout << nb3.getRawBits() << std::endl;

	nb2.setRawBits(256);
	nb3.setRawBits(-894656646);

	std::cout << nb.getRawBits() << std::endl;
	std::cout << nb2.getRawBits() << std::endl;
	std::cout << nb3.getRawBits() << std::endl;
	
	return 0;
}