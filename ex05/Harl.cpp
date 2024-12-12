/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:09:26 by herirand          #+#    #+#             */
/*   Updated: 2024/12/12 09:26:09 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl( void ){return ;};

Harl::~Harl( void ){return ;};

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

	std::string const str[4] = {
		"debug",
		"info",
		"warning",
		"error",
	};

	for (int i = 0; i < 4 ; i++){
		if (level == str[i])
		{
			(this->*(funct[i]))();
			break;
		}
	}
}