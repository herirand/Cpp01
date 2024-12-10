/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:46:17 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 20:43:41 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
class HumanA{
	private:
		std::string _name;
		Weapon&	_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );

		void	setName( std::string str );
		std::string	getName( void ) const;
		void	attack( void )const;

};

#endif
