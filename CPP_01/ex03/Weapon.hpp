/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:19 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 09:47:40 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private :
		std::string		_type;

	public :
		Weapon(std::string type);
		~Weapon();
		
		std::string		get_type() const;
		void			set_type(const std::string& type);
};

#endif