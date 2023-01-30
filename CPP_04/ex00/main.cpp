/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:41:06 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 16:48:46 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << std::endl;
	{
		Dog Medor;
		Cat Minou;
		Cat EvilMinou(Minou);

		EvilMinou.makeSound();
		Medor.makeSound();

		EvilMinou.setType(Medor.getType());

		EvilMinou.makeSound();

		EvilMinou = Minou;
		
		EvilMinou.makeSound();
	}
	std::cout << std::endl << std::endl;
	{
		Dog Medor;
		Animal weirdMold;

		weirdMold.makeSound();
		std::cout << "WeirdMold type before assignation from Medor is : " << weirdMold.getType() << std::endl;
		weirdMold = Medor;
		std::cout << "WeirdMold type after assignation from Medor is : " << weirdMold.getType() << std::endl;
		weirdMold.makeSound();
	}
	std::cout << std::endl << std::endl;
	{
		WrongAnimal *Torgeon = new WrongCat();

		for (int i = 0; i < 24; i++)
			Torgeon->makeSound();
		delete Torgeon;
	}
	return (0);
}