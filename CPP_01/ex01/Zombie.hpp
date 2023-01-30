/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:20:22 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:47:47 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		int 		_zombie_id;
		std::string	_name;
		
	public:
		Zombie();
		~Zombie();
		int				get_id();
		void			set_id(int id);
		std::string		get_name();
		void			set_name(std::string name);
		void			announce();
};

Zombie*					zombieHorde(int n, std::string name);

#endif