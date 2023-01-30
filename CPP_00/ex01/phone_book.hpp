/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:32:47 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 09:54:24 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# define CONTACT_NBR 8
# define VALID_INDEX 1
# define INVALID_INDEX 0
# include <iostream>
# include <cctype>
# include <string>
# include <iomanip>
# include <ios>
# include <sstream>
# include <utility>
# include <stdexcept>
# include "contact.hpp"

class PhoneBook
{
	private	:
		Contact 		_contacts[CONTACT_NBR];
		size_t			contact_index;
		size_t			requested_index;
	public	:
		PhoneBook();
		~PhoneBook ();
		void			print_contact();
		bool			print_contacts_list();
		Contact*		get_contact();
		void			set_contact();
		size_t			get_contact_index();
		size_t			get_requested_index();
		int				set_requested_index();
		void			set_contact_index();
};

void					add(PhoneBook phone_book);
void					quit();

#endif