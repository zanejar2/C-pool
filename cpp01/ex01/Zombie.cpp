/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:07 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:16:08 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout<< "constructor called"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<< "Zombie " << name<< " has been destroyed"<<std::endl;
}

void Zombie::setName(std::string _name)
{
	name = _name;
}

void Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl; 
}