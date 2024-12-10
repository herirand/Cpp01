/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:20:23 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 15:01:39 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon( std::string str ):type(str) {return;};

Weapon::~Weapon( void ){return;};

void	Weapon::setType( std::string str ){
	this->type = str;
}

std::string const Weapon::getType( void )const{
	return this->type;
}
