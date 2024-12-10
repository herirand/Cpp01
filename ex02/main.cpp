/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:35:03 by herirand          #+#    #+#             */
/*   Updated: 2024/12/10 13:39:07 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;

	std::cout << &str << std::endl;
	std::cout << strptr << std::endl;
	std::cout << &strref << std::endl;

	std::cout << str << std::endl;
	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
	
	return 0;
}
