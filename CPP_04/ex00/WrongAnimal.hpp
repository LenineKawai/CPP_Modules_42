/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:50:58 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 13:55:55 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

# include	<string>
# include	<iostream>

class WrongAnimal
{
	protected	:

		std::string type;

	public		:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &animal);
		virtual ~WrongAnimal();

		std::string	getType() const;
		void		setType(std::string nType);
		void		makeSound() const;

		WrongAnimal & operator=(const WrongAnimal &animal);
};

#endif