/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:25:12 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:25:00 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (void)
{
	std::cout << BOLD << UNDER << "We create an"
	<< YELLOW << " emptybuoi " << WHITE << "int array of size 0"
	<< END << std::endl << std::endl;
	Array<int>	emptybuoi;
	try
	{
		std::cout << BOLD << "we try and access index 0 in our" << YELLOW << " emptybuoi " << WHITE << "array, which is of size :" 
		<< BLUE << emptybuoi.size() << END << std::endl;
		std::cout << BOLD << "Index 0 is : " << GREEN <<emptybuoi[0] << END << std::endl;
	}
	catch(const Array<int>::oobIndexException &e)
	{
		std::cerr << BOLD << e.oob() << END << std::endl;
	}
	

	std::cout << std::endl << std::endl;

	std::cout << BOLD << UNDER << "We create a"
	<< YELLOW << " michel " << WHITE << "char array of size 4"
	<< END << std::endl << std::endl;

	Array<char>	michel(4);

	try
	{
		std::cout << BOLD << "we try and put 's' at index 2 in our" << YELLOW << " michel " << WHITE << "array, which is of size : "
		<< BLUE << michel.size() << END << std::endl;
		
		michel[2] = 's';

		std::cout << BOLD << "michel[2] = " << GREEN << michel[2] << END << std::endl;
		std::cout << BOLD << "It worked !" << END << std::endl << std::endl;
		std::cout << BOLD << UNDER << "We then create a"
		<< YELLOW << " jeanCelesting " << WHITE << "char array of size 8"
		<< END << std::endl << std::endl;

		Array<char>jeanCelesting(8);

		std::cout << BOLD << "Now, we give "
		<< YELLOW << " michel " << WHITE <<
		"value to"
		<< YELLOW << " jeanCelesting " << WHITE << std::endl;

		jeanCelesting = michel;

		std::cout << BOLD << "jeanCelesting[2] = " << GREEN << jeanCelesting[2] 
		<< WHITE << " and jeanCelesting size = " << BLUE << jeanCelesting.size() << END << std::endl;
		std::cout << BOLD << "It worked !" << END << std::endl;	

		std::cout << BOLD << "But is it a deep copy ? what if modify index 2 of"
		<< YELLOW << " michel " << WHITE <<
		"will it modify index 2 of"
		<< YELLOW << " jeanCelesting " << WHITE << "?" << std::endl;

		michel[2] = 't';

		std::cout << YELLOW << " michel " << WHITE << "index 2 was set to 't'" << END << std::endl;	
		std::cout << BOLD << "michel[2] = " << GREEN << michel[2] << END << std::endl;
		std::cout << BOLD << "jeanCelesting[2] = " << GREEN << jeanCelesting[2] << END << std::endl; 
		std::cout << BOLD << "It's a deep copy, YIPEE!" << END << std::endl;	

		michel[-1];
	}
	catch(const Array<char>::oobIndexException &e)
	{
		std::cerr << BOLD << e.oob() << END << std::endl;
	}

	std::cout << std::endl << std::endl;

	std::cout << BOLD << UNDER << "We create a"
	<< YELLOW << " youtube " << WHITE << "void pointer array of size 3"
	<< END << std::endl << std::endl;

	Array<void *> youtube(3);

	try
	{
		std::cout << BOLD << "we try and access all of " << YELLOW << " youtube's " << WHITE << "index"<< END << std::endl;	
		for (int i = 0; i < 3; i ++)
			std::cout << WHITE << BOLD << "Index[" << i << "] = " << GREEN << youtube[i] << END << std::endl;
		std::cout << BOLD << "We then give value to those" << std::endl;
		int		*norman = new int ();
		char	*pirorca = new char ();
		void	*inThePanda = new void *();
		youtube[0] = norman;
		youtube[1] = pirorca;
		youtube[2] = inThePanda;
		for (int i = 0; i < 3; i ++)
			std::cout << WHITE << BOLD << "Index[" << i << "] = " << GREEN << youtube[i] << END << std::endl;
		std::cout << BOLD << "beau tableau de pointeur n'est ce pas ?" << std::endl;
		delete norman;
		delete pirorca;
		delete reinterpret_cast<char *>(inThePanda);
	}	
	catch(const Array<void *>::oobIndexException &e)
	{
		std::cerr << BOLD << e.oob() << END << std::endl;
	}
}


// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const Array<int>::oobIndexException &e)
//     {
//         std::cerr << e.oob() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const Array<int>::oobIndexException e)
//     {
//         std::cerr << e.oob() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
