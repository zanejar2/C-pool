/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 00:12:24 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/28 01:12:21 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	name = "Default";
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	this->name = name;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->name = copy.name;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}