/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:35:11 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/28 00:53:23 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("CHAG");
	ScavTrap b("ZEN");
	
	a.attack("ROL");
	a.takeDamage(5);
	a.beRepaired(10);
	
	b.attack("FEN");
	b.takeDamage(10);
	b.beRepaired(10);
	b.guardGate();
	
}