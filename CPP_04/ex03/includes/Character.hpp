/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:26:55 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 15:08:43 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	
		AMateria 	*cInventory[4];
		std::string	cName;
		Character();

public:
	Character(const std::string &name);
	Character(const Character &character);
	~Character();

	Character & operator=(const Character &character);
};

#endif
