/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:10:38 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:10:39 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include<iostream>
#include "Weapon.hpp"

class HumanA{

	private: 
		Weapon &A;
		std::string name;
	
	public:
		HumanA(const std::string _name,  Weapon &_A);
		void attack();
};
#endif