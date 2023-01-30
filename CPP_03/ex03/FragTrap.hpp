/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:42:13 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:14:50 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected	:
		static const unsigned int FragHP = 100;
		static const unsigned int FragEP = 100;
		static const unsigned int FragAT = 30;
	public		:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap &FragTrap);
		~FragTrap();

		FragTrap & operator=(const FragTrap &FragTrap);

		void	attack(const std::string &target);
		void	highFiveGuys(void);
		void	fragPrintHP() const;
		void	fragPrintEP() const;
};

#endif