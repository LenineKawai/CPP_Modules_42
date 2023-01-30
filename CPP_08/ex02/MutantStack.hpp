/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:25:46 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/20 10:36:55 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# define	RESET   "\033[0;0m"
# define	ERASE   "\033[2K\r"
# define	GREY    "\033[30m"
# define	RED     "\033[31m"
# define	GREEN   "\033[32m"
# define	YELLOW  "\033[33m"
# define	BLUE    "\033[34m"
# define	PINK    "\033[35m"
# define	CYAN    "\033[36m"
# define	WHITE   "\033[37m"
# define	BOLD    "\033[1m"
# define	UNDER   "\033[4m"
# define	SUR     "\033[7m"
# define	END     "\033[0m"
# define	CENTER  "\033[60G"

# include	<string> 
# include	<iostream> 
# include	<sstream>
# include	<algorithm> 
# include	<vector> 
# include	<stack> 
# include	<list>

template < typename T >
class MutantStack : public std::stack< T >
{

	public	:
		typedef typename MutantStack< T >::container_type::iterator iterator;
		MutantStack() {};
		MutantStack(const MutantStack &mutant) {*this = mutant;};
		~MutantStack() {};

		MutantStack<T>::iterator begin() {return (this->c.begin());};
		MutantStack<T>::iterator end() {return (this->c.end());};

		MutantStack &operator=(const MutantStack &mutant)
		{
			this->c = mutant.c;
			return (*this);
		};
};

#endif
