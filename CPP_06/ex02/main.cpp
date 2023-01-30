/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:04:59 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 17:45:29 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <iostream>

Base * generate(void)
{
	std::srand(std::time(0));

	if (std::rand() % 3 == 0)
		return (new A);
	else if (std::rand() % 2 == 0)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	A *testPtrA = dynamic_cast<A *>(p);
	if (testPtrA != NULL)
		std::cout << "pointer is type A" << std::endl;
	B *testPtrB = dynamic_cast<B *>(p);
	if (testPtrB != NULL)
		std::cout << "pointer is type B" << std::endl;
	C *testPtrC = dynamic_cast<C *>(p);
	if (testPtrC != NULL)
		std::cout << "pointer is type C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &testPtrA = dynamic_cast<A &>(p);
		std::cout << "ref is type A" << std::endl;
		(void) testPtrA;
	}
	catch (std::exception & e) 
	{
	}
	try
	{
		B &testPtrB = dynamic_cast<B &>(p);
		std::cout << "ref is type B" << std::endl;
		(void) testPtrB;
	}
	catch (std::exception & e) 
	{
	}
	try
	{
		C &testPtrC = dynamic_cast<C &>(p);
		std::cout << "ref is type C" << std::endl;
		(void) testPtrC;
	}
	catch (std::exception & e) 
	{
	}
}

int main()
{
	Base *genTest;
	genTest = generate();
	identify(genTest);

	delete genTest;

	std::cout << std::endl;
	std::cout << std::endl;

	Base *baseA = new A;
	Base *baseB = new B;
	Base *baseC = new C;
	A a;
	B b;
	C c;
	identify(baseA);
	identify(baseB);
	identify(baseC);
	identify(a);
	identify(b);
	identify(c);
	delete baseA;
	delete baseB;
	delete baseC;
	return (0);
}