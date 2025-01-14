/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:56:01 by herirand          #+#    #+#             */
/*   Updated: 2024/12/12 18:26:43 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl( void ){return;};

Harl::~Harl( void ){return;};

void	Harl::debug( void ){
	std::cout << "[DEBUG]\nin debug" << std::endl;
}

void	Harl::info( void ){
	std::cout << "[INFO]\nin info" << std::endl;
}

void	Harl::warning( void ){
	std::cout << "[WARNING]\nin warning" << std::endl;
}

void	Harl::error( void ){
	std::cout << "[ERROR]\nin error" << std::endl;
}

void	Harl::complain( std::string level ){
	void	(Harl::*funct[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string	str[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	int	i = -1;
	while (++i < 4){
		if (str[i] == level)
			break;
	}
	switch (i) {
		case 0:
			(this->*(funct[0]))();
		case 1:
			(this->*(funct[1]))();
		case 2:
			(this->*(funct[2]))();
		case 3:
			(this->*(funct[3]))();
			break;
	}
}
