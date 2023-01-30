/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:21:58 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/23 09:15:26 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
# define	SPAN_HPP

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
# include	<exception> 
# include	<algorithm> 
# include	<vector> 
# include	<cstdlib>
# include	<ctime>

class Span
{
	private	:

		unsigned int		sN;
		unsigned int		sActualSize;
		std::vector< int >	sVec;
		Span();

	public	:

		Span(long int n);
		Span(const Span &span);
		~Span();

		const std::vector< int > &getVec() const;	
		void					addNumber(int nbr);
		void   					addNumber( std::vector<int>::const_iterator, std::vector<int>::const_iterator );
		int						shortestSpan() const;
		int						longestSpan() const;

		Span					&operator=(const Span &span);
		int						operator[](int index);
	
	class moreThanNException : public std::exception 
	{
		private	:
			size_t eN;
			moreThanNException();
		public	:
			moreThanNException(size_t nbr);
			std::string moreThanN() const throw();
	};
	class noSpanException : public std::exception
	{
		public :
			std::string notEnoughNumber() const throw();	
	};
	class oobIndexException : public std::exception
	{
		private	:
			const int index;
			oobIndexException();
		public	:
			oobIndexException(int i);
			const std::string	oobInsert() const throw();
			const std::string	oob() const throw();
	};
	class InsertException : public std::exception
	{
		public	:
			const std::string	Insert() const throw();
	};
};

#endif
