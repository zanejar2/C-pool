/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:11 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:10:12 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include<iostream>

class Zombie{

private:
	std::string name;

public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string _name);
};

Zombie* zombieHorde( int N, std::string name );

#endif