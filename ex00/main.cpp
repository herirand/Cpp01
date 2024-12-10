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
#include <string>
void randomChump( std::string name );
Zombie*	newZombie( std::string name);

int	main(void)
{
	Zombie *New;

	New = newZombie("antonio");
	New->announce();
	// New = newZombie("tonio");
	// New->announce();
	randomChump("herirand");
	randomChump("heri");
	delete []New;
	return 0;
}
