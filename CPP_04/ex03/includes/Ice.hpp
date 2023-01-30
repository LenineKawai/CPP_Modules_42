/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:37 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/04 14:04:33 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
# define	ICE_HPP

# include	"AMateria.hpp"

class Ice : public AMateria
{
	private:


	public:

		Ice();
		Ice(const Ice &ice);
		~Ice();

		Ice & operator=(const Ice &ice);

		AMateria*	clone() const;
};

#endif