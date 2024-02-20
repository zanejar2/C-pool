/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:43 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:10:44 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include<iostream>
#include "Weapon.hpp"

class HumanB{

	private: 
		Weapon* B;
		std::string name;
	
	public:
		HumanB(std::string _name);
		void setWeapon(Weapon &_B);
		void attack();
};
#endif