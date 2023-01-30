/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:34 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/23 11:45:38 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : sN(0), sActualSize(0)
{
	;
}
Span::Span(long int n) : sN(n), sActualSize(0)
{
	if (sN != n)
	{
		sN = 0;
		std::cout << RED << "you try to initialize a Span with a number which is out of the unside scope, value was set to 0" << END << std::endl;
	}
}

Span::Span(const Span &span)
{
	*this = span;
}

Span::~Span()
{
	;
}

void	Span::addNumber(int nbr)
{
	sActualSize ++;
	if (sActualSize > sN)
		throw (moreThanNException(sN));
	sVec.push_back(nbr);
}

void 	Span::addNumber( std::vector<int>::const_iterator itBegin, std::vector<int>::const_iterator itEnd )
{
	std::vector < int > tmp;
	tmp.insert( tmp.end(), itBegin, itEnd );
    if ( tmp.size() > sN )
        throw (InsertException());
    sVec.insert( sVec.end(), itBegin, itEnd );
	sActualSize = sVec.size();
}

int		Span::shortestSpan() const
{
	if (sVec.empty() || sVec.size() == 1)
		throw (noSpanException());

	std::vector<const int>::iterator itMin;
	int shortestSpan;
	int tmp;
	Span vcpy(*this);

	std::sort(vcpy.sVec.begin(), vcpy.sVec.end());
	shortestSpan = vcpy.sVec[1] - vcpy.sVec[0];
	unsigned int len = vcpy.sVec.size();
	for (unsigned int i = 1; i < len - 1; i ++)
	{
		tmp = vcpy.sVec[i + 1] - vcpy.sVec[i]; 
		if (tmp < shortestSpan)
			shortestSpan = tmp;
	}
	return (shortestSpan);
}
int		Span::longestSpan() const
{
	
	std::vector<const int>::iterator itMin;
	std::vector<const int>::iterator itMax;

	if (sVec.empty() || sVec.size() == 1)
		throw (noSpanException());

	itMin = std::min_element(sVec.begin(), sVec.end());
	itMax = std::max_element(sVec.begin(), sVec.end());
	return (*itMax - *itMin);
}

const std::vector< int > &Span::getVec() const
{
	return (sVec);
}

Span	&Span::operator=(const Span &span)
{
	this->sN = span.sN;
	this->sVec = span.sVec;
	this->sActualSize = span.sActualSize;
	return (*this);
}

int		Span::operator[](int index)
{
	if (index < 0 || index >= static_cast<int>(sActualSize))
		throw (oobIndexException(index));
	return (sVec[index]);
}

Span::moreThanNException::moreThanNException(size_t nbr) : eN(nbr)
{
	;
}
std::string 	Span::moreThanNException::moreThanN() const throw()
{
	std::string r;
	r = "you can't assing mor than ";
	r.append(std::to_string(eN));
	r.append(" numbers to this span.");
	return (r);
}

std::string 	Span::noSpanException::notEnoughNumber() const throw()
{
	return ("not enough number in this object to establish a span");
}

Span::oobIndexException::oobIndexException(int i) : index(i) 
{
	;
}

const std::string	Span::oobIndexException::oob() const throw() 
{
	std::stringstream ss;
	std::string str;

	ss << index;
	ss >> str;
	str.append(" is out of bound");
	return (str);
}

const std::string	Span::InsertException::Insert() const throw() 
{
	return ("The container your are trying to insert is too large for this Span");
}

