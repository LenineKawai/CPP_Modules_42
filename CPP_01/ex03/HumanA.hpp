/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:08 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 09:39:42 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private :
		std::string		_name;
		Weapon&			_weapon;

	public :
		// HumanA();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		std::string		get_name() const;
		void			set_name(std::string name);
		void			attack() const;
};

#endif