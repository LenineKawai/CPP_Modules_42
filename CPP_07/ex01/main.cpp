/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:15:28 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:28:06 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

// template <typename T>
// void print(T const & x) { std::cout << x << std::endl; return; }

// int main() 
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// //	Awesome tab2[5];

// 	iter(tab, 5, print);
// //	iter(tab2, 5, print);
// return 0;
// }

int main ()
{
	{
		int array[3] = {1, 2, 3};
		for (int i = 0; i < 3; i ++)
			std::cout << BOLD << "array [" << i << "] = " << END << array[i] << std::endl;
		std::cout << std::endl;
		
		iter(array, 3, PlusPlus);

		for (int i = 0; i < 3; i ++)
			std::cout << BOLD << "new array [" << i << "] = " << END << array[i] << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << BOLD << "char array : " << END << std::endl << std::endl;
		char michel[7] = {"BRESIL"};
		for (int i = 0; michel[i]; i ++)
			std::cout << michel[i];
		std::cout << std::endl << std::endl;
		std::cout << BOLD << "new array : " << END << std::endl << std::endl;
		iter(michel, 6, PlusPlus);
		for (int i = 0; michel[i]; i ++)
			std::cout << michel[i];
		std::cout << std::endl << std::endl;
	}
	{
		std::string jambon = "jambon";
		std::cout << BOLD << "String : " << END << std::endl << std::endl << jambon <<std::endl << std::endl;
		iter(&jambon[0], jambon.length(), PlusPlus);
		std::cout << BOLD << "New String = " << END << std::endl << std::endl << jambon <<std::endl << std::endl;
	}
	{
		int a = 1;
		int b = 2;
		int c = 3;
		int *aPtr = &a;
		int *bPtr = &b;
		int *cPtr = &c;
		int *intPtrArray[3] = {aPtr, bPtr, cPtr};
		for (int i = 0; i < 3; i ++)
			std::cout << BOLD << "intPtrArray [" << i << "] = " << END << &intPtrArray[i] << std::endl; 
		iter(intPtrArray, 3, PrintPrint);
	}
	return (0);
}
