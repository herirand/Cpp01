/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:02:30 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 13:05:53 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*New;
	int		i;
	int		nb;

	nb = 10;
	New = zombieHorde(nb, "test");
	i = 0;
	while (i < nb)
	{
		New[i].announce();
		i ++;
	}
	delete [] New;
	return (0);
}
