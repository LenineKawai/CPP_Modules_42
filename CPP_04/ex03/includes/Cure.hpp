/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:35 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 14:04:40 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CURE_HPP
# define	CURE_HPP

# include	"AMateria.hpp"

class Cure  : public AMateria
{
	private:


	public:

		Cure();
		Cure(const Cure &cure);
		~Cure();

		Cure & operator=(const Cure &curee);

		AMateria*	clone() const;
};

#endif