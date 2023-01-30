/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:07:26 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:49:11 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	*Zombig_band;
	int		n = 10;

	Zombig_band = zombieHorde(n, "\033[31mZombig_bander\033[0m");
	for (int i = 0; i < n; i ++)
		Zombig_band[i].announce();
	delete[] Zombig_band;
	return (0);
}