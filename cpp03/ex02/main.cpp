/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:35:11 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/28 00:54:11 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap a("LOLA");
	FragTrap b("DAN");
	
	a.attack("POR");
	a.takeDamage(5);
	a.beRepaired(10);
	
	b.attack("DIN");
	b.takeDamage(10);
	b.beRepaired(10);
	b.highFivesGuys();
}