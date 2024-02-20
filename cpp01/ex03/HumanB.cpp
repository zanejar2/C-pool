/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:41 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:15:17 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
}

void HumanB::setWeapon(Weapon &_B)
{
	B = &_B;
}

void HumanB::attack()
{
	if (B)
		std::cout<< name<< " attacks with their "<< B->getType()<< std::endl;
	else 
		std::cout<< name << " doesn't have a weapon"<< std::endl;
}