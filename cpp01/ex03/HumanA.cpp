/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:36 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:14:53 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string _name, Weapon &_A) : A(_A), name(_name) {}

void HumanA::attack()
{
	std::cout<< name<< " attacks with their "<< A.getType()<< std::endl;
}