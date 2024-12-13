/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:47:54 by herirand          #+#    #+#             */
/*   Updated: 2024/12/13 14:40:26 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replacesub(const std::string& str, const std::string& target, const std::string& repl)
{
	std::string	result;
	size_t		pos;
	size_t		found;

	pos = 0;
	while ((found = str.find(target, pos)) != std::string::npos)
	{
		result += str.substr(pos, found - pos);
		result += repl;
		pos = found + target.length();
	}
	result += str.substr(pos);
	return result;
}

int	main(int ac, char *av[])
{
		
	if (ac != 4)
	{
		std::cout << "Sorry, it's a very bad argument " << std::endl;
		return (0);
	}
	std::ifstream infile(av[1]);
	if (!infile)
		return (1);
	std::string out2 = av[1];
	out2 += ".replace";
	std::ofstream outfile(out2.c_str());
	if (!outfile)
		return (1);
	std::string str;
	std::string	out1;
	while(std::getline(infile, str))
	{
		out1 = replacesub(str, av[2], av[3]);
		outfile << out1 << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
