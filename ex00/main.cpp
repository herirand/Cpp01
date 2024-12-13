/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:28 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 10:27:08 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>
#include <string>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(int ac, char *av[])
{
	Zombie *New;

	if (ac != 3)
	{
		std::cout << "Arguments must be 2" << std::endl;
		return (0);
	}
	New = newZombie(av[1]);
	New->announce();
	randomChump(av[2]);
	delete []New;
	return 0;
}
