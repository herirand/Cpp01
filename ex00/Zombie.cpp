/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:49:28 by herirand          #+#    #+#             */
/*   Updated: 2024/12/09 10:54:47 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void){return;};

Zombie::~Zombie(void){return;};

void	Zombie::setName(std::string& str){
	this->name= str;
	return ;
}

std::string	Zombie::getName(void)const{
	return this->name;
}

void	Zombie::announce(void){
	std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
