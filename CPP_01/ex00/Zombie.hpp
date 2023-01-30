/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:20:22 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 18:07:02 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie();
		~Zombie();
		std::string		get_name();
		void			set_name(std::string name);
		void			announce();
};

Zombie*					newZombie(std::string name);
void					randomChump(std::string name);

#endif