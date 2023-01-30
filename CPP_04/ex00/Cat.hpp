/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:21:05 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 16:21:42 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	private	:

	public	:

		Cat();
		Cat(const Cat &cat);
		~Cat();

		void		makeSound() const;

		Cat & operator=(const Cat &cat);
};

#endif