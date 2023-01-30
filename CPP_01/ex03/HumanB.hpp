/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:15 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 10:09:04 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private :
		std::string		_name;
		Weapon			*_weapon;

	public :
		HumanB(std::string name);
		~HumanB();
		std::string		get_name() const;
		void			set_name(std::string name);
		Weapon*			get_weapon() const;
		void			set_weapon(Weapon &weapon);
		void			attack() const;
};

#endif