/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:58:22 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:36:59 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << UNDER << BOLD "top value : " << END
	<< std::endl << std::endl;
	std::cout << BOLD << GREY << mstack.top() << END << std::endl;
	mstack.pop();
	std::cout << std::endl << std::endl
	<< UNDER << BOLD "size : " << END
	<< std::endl << std::endl;
	std::cout << BLUE << BOLD << mstack.size() << END << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end(); 
	++it;
	--it;
	std::cout << std::endl << std::endl
	<< UNDER << BOLD "list : " << END
	<< std::endl << std::endl;
	while (it != ite)
	{
	std::cout << BOLD << YELLOW << *it << END << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// int main()
// {

// 	std::list<int> lst;
// 	lst.push_back(5);
// 	lst.push_back(17);
// 	std::cout << UNDER << BOLD "last value : " << END
// 	<< std::endl << std::endl;
// 	std::cout << BOLD << GREY << lst.back() << END;
// 	lst.pop_back();
// 	std::cout << std::endl << std::endl
// 	<< UNDER << BOLD "size : " << END
// 	<< std::endl << std::endl;
// 	std::cout << BOLD << BLUE << lst.size() << END;
// 	lst.push_back(3);
// 	lst.push_back(5);
// 	lst.push_back(737);
// 	lst.push_back(0);
// 	std::list<int>::iterator it = lst.begin();
// 	std::list<int>::iterator ite = lst.end();
// 	++it;
// 	--it;
// 	std::cout << std::endl << std::endl
// 	<< UNDER << BOLD "list : " << END
// 	<< std::endl << std::endl;	
// 	while (it != ite)
// 	{
// 		std::cout << BOLD << YELLOW << *it << END << std::endl;
// 		++it;
// 	}
// 	std::list<int> s1(lst);
// 	return 0;
// }
