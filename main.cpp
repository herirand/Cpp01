/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:28 by herirand          #+#    #+#             */
/*   Updated: 2024/12/09 10:56:58 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int	main(void)
{
	Zombie instance;
	std::string str = "antonio";

	instance.setName(str);
	instance.announce();
	return 0;
}
