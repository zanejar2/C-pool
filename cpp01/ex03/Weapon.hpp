/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:11:02 by zanejar           #+#    #+#             */
/*   Updated: 2023/04/11 03:11:03 by zanejar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>

class Weapon{
	
	private:
		std::string type;
	
	public:
		Weapon();
		Weapon(std::string _type);
		const std::string& getType();
		void setType(std::string _type);
};

#endif