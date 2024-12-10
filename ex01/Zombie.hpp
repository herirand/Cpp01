/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:39:49 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 13:02:08 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{

	private:
		std::string  _name;

	public:
		void	announce( void );
		void	setName( std::string& str );
		std::string getName( void )const;
		Zombie( void );
		~Zombie( void );

};
Zombie*	zombieHorde( int N, std::string name );

#endif // !Zombie_hpp
