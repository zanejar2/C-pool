/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:09:59 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:10:00 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	std::string name = "BAN";
	Zombie *Horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
        Horde[i].announce();
    }
	delete[] Horde;
	return 0;
}