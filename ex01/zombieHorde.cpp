/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:57:12 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 13:02:04 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){
	Zombie	*New = new(std::nothrow)Zombie[N];
	if (!New)
		return (NULL);
	int	i;
	i = 0;
	while (i < N)
	{
		New[i].setName(name);
		i ++;
	}
	return New;
}
