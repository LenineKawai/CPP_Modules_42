/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:42:13 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:09:54 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();
	public:
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