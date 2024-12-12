/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:26:36 by herirand          #+#    #+#             */
/*   Updated: 2024/12/12 09:27:20 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char *av[])
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	return (0);
}
