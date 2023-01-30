/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:40:26 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/14 16:23:29 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private :
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkSecret;
	public :
		Contact();
		~Contact ();
		std::string	get_FirstName();
		std::string	get_LastName();
		std::string	get_Nickname();
		std::string	get_PhoneNumber();
		std::string	get_DarkSecret();
		void		set_FirstName(std::string first_name);
		void		set_LastName(std::string last_name);
		void		set_Nickname(std::string nickname);
		void		set_PhoneNumber(std::string phone_number);
		void		set_DarkSecret(std::string dark_secret);
};

#endif