/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:21:05 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/03 15:53:36 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include "Animal.hpp"

class WrongCat : public WrongAnimal
{
	private	:

	public	:

		WrongCat();
		WrongCat(const WrongCat &wrongCat);
		~WrongCat();

		WrongCat & operator=(const WrongCat &wrongCat);
};

#endif