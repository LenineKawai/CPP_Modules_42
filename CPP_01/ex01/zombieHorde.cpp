/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:54:41 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:31:09 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	if (n < 0)
	{
		std::cout << "A Negative zombie is a living human being, this is for zombie creation only." << std::endl;
		return (NULL);
	}
	if (n == 0)
	{
		std::cout << "here you go, ZERO zombie created, youmust be fun at parties" << std::endl;
		return (NULL);
	}
	Zombie *newZombie = new Zombie[n];

	for (int i = 0; i < n; i ++)
	{
		newZombie[i].set_name(name);
	}
	return (newZombie);
}