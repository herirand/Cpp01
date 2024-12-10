/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:48:31 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 12:56:44 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie::Zombie( void ){return ;}

Zombie::~Zombie( void ){
	std::cout << this->_name << ": Zombie is dead" << std::endl;
}

void	Zombie::setName( std::string& str){
	this->_name = str;
}

std::string	Zombie::getName( void )const{
	return this->_name;
}

void	Zombie::announce( void ){
	std::cout << Zombie::getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
