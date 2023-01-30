/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:40:51 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 14:19:20 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main ()
{
	Data instance_random;
	Data *instance_random_deux = NULL;
	instance_random.un = 1;
	instance_random.deux = 88;
	instance_random.trois = 3;
	uintptr_t intPtr;

	intPtr = serialize(&instance_random);
	instance_random_deux = deserialize(intPtr);
	std::cout << &instance_random << std::endl;
	std::cout << instance_random_deux << std::endl;

	std::ostringstream oss1;
	std::ostringstream oss2;
	std::string address1 = oss1.str();
	std::string address2 = oss2.str();
	if (address1 == address2)
		std::cout << "C win bravo" << std::endl;
	else
		std::cout << "C loose deso" << std::endl;

	std::cout << instance_random_deux->un << std::endl;
	std::cout << instance_random_deux->deux << std::endl;
	std::cout << instance_random_deux->trois << std::endl;
}