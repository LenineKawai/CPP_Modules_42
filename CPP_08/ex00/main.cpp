/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:34:28 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/24 10:49:16 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void)
{
	std::cout << BOLD << YELLOW << UNDER << "std::vector : " << END << std::endl << std::endl;
	std::vector<int> v;

	std::vector<int>::iterator it;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	it = easyfind< std::vector<int> >(v , 'a');
	if (it != v.end())
		std::cout << BOLD << "Element found in v : " << *it << std::endl;
  	else
		std::cout << "Element not found in v" << std::endl;
	it = easyfind< std::vector<int> >(v , 'b');
	if (it != v.end())
		std::cout << "Element found in v : " << *it << std::endl;
  	else
		std::cout << "Element not found in v" << std::endl;
	it = easyfind< std::vector<int> >(v , 'c');
	if (it != v.end())
		std::cout << "Element found in v : " << *it << std::endl;
  	else
		std::cout << "Element not found in v" << std::endl;
	it = easyfind< std::vector<int> >(v , 'e');
	if (it != v.end())
		std::cout << "Element found in v : " << *it << std::endl;
  	else
		std::cout << "Element not found in v" << std::endl;

	{
		std::cout << std::endl << BOLD << YELLOW << UNDER << "std::list : " << END << std::endl << std::endl;
		std::list<int> l;

		std::list<int>::iterator lit;

		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		lit = easyfind< std::list<int> >(l , 1);
		if (lit != l.end())
			std::cout << BOLD << "Element found in l : " << *lit << std::endl;
		else
			std::cout << "Element not found in l" << std::endl;
		lit = easyfind< std::list<int> >(l , 2);
		if (lit != l.end())
			std::cout << "Element found in l : " << *lit << std::endl;
		else
			std::cout << "Element not found in l" << std::endl;
		lit = easyfind< std::list<int> >(l , 3);
		if (lit != l.end())
			std::cout << "Element found in l : " << *lit << std::endl;
		else
			std::cout << "Element not found in l" << std::endl;
		lit = easyfind< std::list<int> >(l , 4);
		if (lit != l.end())
			std::cout << "Element found in l : " << *lit << std::endl;
		else
			std::cout << "Element not found in l" << std::endl;
	}
		return (0);
}
