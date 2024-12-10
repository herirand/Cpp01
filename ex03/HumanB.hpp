/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:05:01 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 20:44:25 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB( std::string name );
		~HumanB ( void );

		void		setName( std::string name );
		std::string	getName( void )const;
		void		attack( void )const;
		void		setWeapon( Weapon  &weapon );
};

#endif
