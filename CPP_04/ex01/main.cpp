/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:41:06 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:31:01 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define ARRAYSIZE 4
#define HALFARRAYSIZE 2

int main(void)
{	
	Animal *AnimalShelter[ARRAYSIZE];
	for (int i = 0; i < HALFARRAYSIZE; i++)
		AnimalShelter[i] = new Dog();
	for (int i = HALFARRAYSIZE; i < ARRAYSIZE; i++)
		AnimalShelter[i] = new Cat();
	for (int i = 0; i < ARRAYSIZE; i ++)
		std::cout << "Cage " << i << " is occupied by a " << AnimalShelter[i]->getType() << std::endl;
	for (int i = 0; i < ARRAYSIZE; i ++)
		delete AnimalShelter[i];

	std::cout << std::endl << std::endl;
	
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << std::endl << std::endl;
	{
		Animal Pit;
		Animal Pat = Pit;
		std::cout << "Pit type is : " << Pit.getType() << std::endl;
		std::cout << "Pat type is : " << Pat.getType() << std::endl << std::endl;

		std::cout << "we set Pat type to 'Big Bonobo'" << std::endl << std::endl;
		Pat.setType("Big Bonobo");

		std::cout << "Pit type is now : " << Pit.getType() << std::endl;
		std::cout << "Pat type is now : " << Pat.getType() << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		// Cat dawg;
		// Cat doug(dawg);
		Dog dawg;
		Dog doug(dawg);

		std::cout << "Dawg idea 46 is : " << dawg.getBrain().getIdea(46) << std::endl;
		std::cout << "Doug idea 46 is : " << doug.getBrain().getIdea(46) << std::endl << std::endl;

		std::cout << "we set idea 46 inl Dawg brain to 'KILL MAIL MAN'" << std::endl << std::endl;
		dawg.getBrain().setIdea("KILL MAIL MAN", 46) ;

		std::cout << "Doug idea 46 is : " << doug.getBrain().getIdea(46) << std::endl;
		std::cout << "Dawg idea 46 is : " << dawg.getBrain().getIdea(46) << std::endl;
	}
	return (0);
}