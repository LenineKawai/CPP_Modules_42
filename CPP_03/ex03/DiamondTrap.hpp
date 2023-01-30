/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:17:59 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 13:21:19 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_Name;
	DiamondTrap();
public:
	DiamondTrap(std::string diamondName);
	DiamondTrap(const DiamondTrap &DiamondTrap);
	~DiamondTrap();

	DiamondTrap & operator=(const DiamondTrap &DiamondTrap);

	void	attack(const std::string &target){FragTrap::attack(target);}
	void	whoAmI();
	void	DiamsPrintHP() const;
	void	DiamsPrintEP() const;
};

#endif