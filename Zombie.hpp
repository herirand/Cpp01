/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:38:18 by herirand          #+#    #+#             */
/*   Updated: 2024/12/09 10:53:22 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
class Zombie {

	private:
		std::string	name;

	public:
		void	setName(std::string& str);
		std::string	getName(void) const;
		void announce( void );

		Zombie(void);
		~Zombie(void);
	
};

#endif // !dd#endif
