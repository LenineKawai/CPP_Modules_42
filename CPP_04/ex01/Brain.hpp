/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:52:27 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:19:44 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private	:
		std::string	ideas[100];
	public	:
		Brain();
		Brain(const Brain &brain);
		~Brain();

		std::string		getIdea(unsigned int i) const;
		void			setIdea(const std::string &str, unsigned int i);
		void			setIdeas(const Brain &brain);

		Brain & operator=(const Brain &brain);
};

#endif