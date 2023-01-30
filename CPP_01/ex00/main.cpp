/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:07:26 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:06:13 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	Mojojojo;
	Zombie	*Rick_Grimmes;

	Mojojojo.announce();

	Rick_Grimmes = newZombie("\033[31mRick_Grimmes\033[0m");

	Rick_Grimmes->announce();
	
	randomChump("\033[31mPaul_Mirabelle\033[0m");

	delete Rick_Grimmes;
	return (0);
}