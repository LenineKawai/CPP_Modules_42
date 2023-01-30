/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:48:14 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/24 12:50:40 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl << std::endl;
	}

	Span TableauNormal(11);

	try
	{
		TableauNormal.addNumber(899);
		for (size_t i = 1; i < 11; i ++)
		{
			if (i % 2 == 0)
				TableauNormal.addNumber(i * 3);
			else
				TableauNormal.addNumber(i * 2);
		}
		for (size_t i = 0; i < 11; i ++)
		{
			std::cout << TableauNormal[i] << std::endl;
		}	
	}
	catch(const Span::moreThanNException &e)
	{
		std::cerr << e.moreThanN() << '\n';
	}
	catch(const Span::oobIndexException &e)
	{
		std::cerr << e.oob() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << TableauNormal.shortestSpan() << std::endl;
		std::cout << GREEN << TableauNormal.longestSpan() << END << std::endl;
	}
	catch(const Span::noSpanException &e)
	{
		std::cerr << e.notEnoughNumber() << '\n';
	}	


	Span GrosTableau(10000);
	std::srand(std::time(0));
	
	try
	{
		std::vector < int > vec(10000);
		std::generate(vec.begin(), vec.end(), std::rand);
		GrosTableau.addNumber(vec.begin(), vec.end());
	}
	catch(const Span::moreThanNException &e)
	{
		std::cerr << e.moreThanN() << '\n';
	}
	catch(const Span::InsertException &e)
	{
		std::cerr << e.Insert() << '\n';	
	}
	catch(const std::length_error &e)
	{
		std::cerr << e.what() << " lenght error" <<  '\n';	
	}
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << GrosTableau.shortestSpan() << std::endl;
		std::cout << GREEN << GrosTableau.longestSpan() << END << std::endl;
	}
	catch(const Span::noSpanException &e)
	{
		std::cerr << e.notEnoughNumber() << '\n';
	}
	
	return (0);
}
