/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:41:06 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:42:32 by mgolinva         ###   ########.fr       */
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
		Dog Pit;

		std::cout << "we set idea 46 in Pit brain to 'BONE'" << std::endl << std::endl;
		Pit.getBrain().setIdea("BONE", 46) ;

		Dog Pat(Pit);
		std::cout << "Pit type is : " << Pit.getType() << std::endl;
		std::cout << "Pat type is : " << Pat.getType() << std::endl << std::endl;
		std::cout << "Pit idea 46 is : " << Pit.getBrain().getIdea(46) << std::endl;
		std::cout << "Pat idea 46 is : " << Pat.getBrain().getIdea(46) << std::endl;

		std::cout << "we set Pat type to 'Evil Dog'" << std::endl;
		std::cout << "we set idea 46 in Pat brain to 'KILL MAIL MAN'" << std::endl << std::endl;
		Pat.getBrain().setIdea("KILL MAIL MAN", 46) ;
		Pat.setType("Evil Dog");

		std::cout << "Pit type is now : " << Pit.getType() << std::endl;
		std::cout << "Pat type is now : " << Pat.getType() << std::endl;
		std::cout << "Pit idea 46 is : " << Pit.getBrain().getIdea(46) << std::endl;
		std::cout << "Pat idea 46 is : " << Pat.getBrain().getIdea(46) << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		Cat Sup;
		Cat Nip;
		std::cout << std::endl;
		std::cout << BOLD << "Nip  takes over Sup brain by sheer will" << END << std::endl;
		Sup = Nip;
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "un-comment the following lines to test if you can instantiate an Animal" << std::endl;
		// Animal Sarkozy;
		// Dog schmut;
		// Animal Sarkozy(schmut);
	}
	return (0);
}