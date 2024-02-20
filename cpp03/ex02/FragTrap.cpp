/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 00:43:46 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/28 01:25:43 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	name = "Default";
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	this->name = name;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = copy.name;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " has requested a high five" << std::endl;
}