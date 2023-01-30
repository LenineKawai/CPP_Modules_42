/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:44:37 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/19 10:44:26 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;

	if (ac != 2)
	{
		std::cout << "we need one, and one only, argument for this program to do anyathing"
		<< std::endl;
		return (1);
	}	
	Harl.complain(std::string(av[1]));
	return (0);
}