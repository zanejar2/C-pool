/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:11:00 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:11:01 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

const std::string& Weapon::getType()
{
	const std::string& ref = type;
	return (ref);
}

void Weapon::setType(std::string _type)
{
	type = _type;
}
