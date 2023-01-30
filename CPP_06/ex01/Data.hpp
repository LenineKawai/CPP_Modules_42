/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:31:27 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 14:15:21 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DATA_HPP
#define		DATA_HPP

#include	<string>
#include	<sstream>
#include	<iostream>


typedef struct s_Data
{
	int un;
	int deux;
	int trois;
} Data;

Data		*deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

#endif