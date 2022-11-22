/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:35:41 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/22 17:07:07 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <fstream>
#include <sstream>

int sed(std::string file, std::string s1, std::string s2)
{
	std::string str;
	std::stringstream	stream;
	int	j = 0;
	int i = 0;

	if (s1.empty()) {
		std::cout << "Please, make sure s1 is not empty." << std::endl; 
		return (0);
	}
	std::ifstream ifs(file.c_str());
	if (ifs.is_open())
	{
		std::ofstream ofs(file.append(".replace").c_str());
		stream << ifs.rdbuf();
		str = stream.str();
		ifs.close();
		while ((i = str.find(s1, j)) != -1)
		{
			j = i;
			str.erase(i, s1.length());
			str.insert(i, s2);
			j += s2.length();
		}
		ofs << str;
		ofs.close();
	}
	else
		std::cout << "Failure, cant open the file" << std::endl;
	return (0);
}
