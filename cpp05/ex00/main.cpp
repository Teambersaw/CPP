/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 11:13:12 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Julot("Julot", 500);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat Bastien("Bastien", 1);
	Bureaucrat Theo("Théo", 75);
	Bureaucrat Hugo("Hugo", 150);

	std::cout << Bastien << Theo << Hugo << std::endl;
	try {
		Bastien.upper_grade();
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl << std::endl;
	}
	Theo.upper_grade();
	std::cout << Theo;
	Theo.lower_grade();
	std::cout << Theo << std::endl;
	try
	{
		Hugo.lower_grade();
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl << std::endl;
	}
	std::cout << Bastien;
	std::cout << Hugo << std::endl;
	return (0);
}