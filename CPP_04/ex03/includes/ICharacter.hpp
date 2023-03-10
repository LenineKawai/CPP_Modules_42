/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:39 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 14:49:08 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICHARACTER_HPP
# define	ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	public	:

		ICharacter();
		ICharacter(const ICharacter &character);	
		virtual ~ICharacter();

		ICharacter & operator=(const ICharacter &character);

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif