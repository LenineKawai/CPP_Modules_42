/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <mgolinva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:24:57 by mgolinva          #+#    #+#             */
/*   Updated: 2023/01/05 14:49:45 by mgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

ICharacter::ICharacter()
{
	;
}
ICharacter::ICharacter(const ICharacter &character)
{
	*this = character;
}
ICharacter::~ICharacter()
{
	;
}

ICharacter & ICharacter::operator=(const ICharacter &character)
{
	;
}