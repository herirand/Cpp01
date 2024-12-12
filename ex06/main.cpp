/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:47:18 by herirand          #+#    #+#             */
/*   Updated: 2024/12/12 14:48:52 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	Harl	harl;

	if (ac != 2)
		return 0;
	harl.complain(av[1]);
	return 0;
}
