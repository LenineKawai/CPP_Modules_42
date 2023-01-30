/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:23:24 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 11:17:30 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_HPP
# define	CLAPTRAP_HPP
# include	<string>
# include	<iostream>

# define RESET   "\033[0;0m"
# define ERASE   "\033[2K\r"
# define GREY    "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define PINK    "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define BOLD    "\033[1m"
# define UNDER   "\033[4m"
# define SUR     "\033[7m"
# define END     "\033[0m"
# define CENTER  "\033[60G"

class ClapTrap
{
	protected:
		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDammages;
		
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &ClapTrap);
		~ClapTrap();

		virtual void	attack(const std::string &target);
		void			takeDamage(const unsigned int amount);
		void			beRepaired(const unsigned int amount);

		std::string		getName(void) const;
		void			setName(std::string newName);
		unsigned int	getHP(void) const;
		void			setHP(unsigned int newHP);
		unsigned int	getEP(void) const;
		void			setEP(unsigned int newEP);
		unsigned int	getATT(void) const;
		void			setATT(unsigned int newATT);

		ClapTrap & operator=(const ClapTrap &ClapTrap);
};

bool 	tired(ClapTrap &ClapTrap);
bool	dead(ClapTrap &ClapTrap);

#endif