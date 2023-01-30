/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:18:33 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:16:22 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private	:

		Brain *brain;

	public	:

		Dog();
		Dog(const Dog &dog);
		virtual ~Dog();

		Brain	&getBrain();
		void	makeSound() const;

		Dog & operator=(const Dog &dog);
};

#endif