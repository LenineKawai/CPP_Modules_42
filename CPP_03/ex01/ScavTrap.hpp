/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:14:07 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:05:14 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

# include	"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	public:
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &ScavTrap);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap &ScavTrap);

		void	attack(const std::string &target);
		void	guardGate(void);
		void	scavPrintEP();
		void	scavPrintHP();
};


#endif