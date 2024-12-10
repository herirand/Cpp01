/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:51:55 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 15:04:28 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA( std::string name, Weapon & weapon ): _name(name), _weapon(weapon){
	return ;
}

HumanA::~HumanA( void ){return;}

void	HumanA::setName(std::string str){
	this->_name = str;
}

std::string	HumanA::getName( void )const{
	return this->_name;
}

void	HumanA::attack( void )const{
	std::cout << HumanA::getName() << " attacks with their ";
	std::cout << HumanA::_weapon.getType() << std::endl;
}
