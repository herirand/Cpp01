/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:38 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 20:44:11 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL){return;}

HumanB::~HumanB( void ){return;}

void	HumanB::setName( std::string name ){
	this->_name = name;
}

std::string	HumanB::getName( void )const{
	return this->_name;
}

void	HumanB::attack( void )const{
	if (!_weapon)
	{
		std::cerr << "error" << std::endl;
		return ;
	}
	std::cout << HumanB::getName() << " attacks with their ";
	std::cout << HumanB::_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ){
	this->_weapon = &weapon;
}
