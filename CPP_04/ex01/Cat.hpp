/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:21:05 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/09 10:16:08 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	private	:

		Brain *brain;

	public	:

		Cat();
		Cat(const Cat &cat);
		~Cat();

		Brain	&getBrain();
		void		makeSound() const;

		Cat & operator=(const Cat &cat);
};

#endif