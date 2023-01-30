/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:40:50 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/13 14:16:00 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t intPtr;

	intPtr = reinterpret_cast <uintptr_t> (ptr);
	return (intPtr);
}

Data		*deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast <Data *> (raw);
	return (ptr);
}