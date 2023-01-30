/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:24:41 by mgolinva          #+#    #+#             */
/*   Updated: 2022/12/16 16:23:54 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <istream>
#include <fstream>
# include <string>
# include <cstdio>

typedef struct	s_sed
{
	std::ifstream	file;
	std::string		filename;
	std::string		to_find;
	std::string		replacement;
	size_t			to_find_len;
	std::ofstream	new_file;
}					t_sed;

#endif