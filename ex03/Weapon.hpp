/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:03:46 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 15:01:06 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
class Weapon{
	private:
		std::string type;

	public:
		Weapon( std::string str );
		~Weapon( void );
		std::string const getType( void ) const;
		void	setType( std::string str );
};

#endif
