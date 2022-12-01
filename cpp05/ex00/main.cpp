/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 00:47:28 by jrossett         ###   ########.fr       */
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
	try
	{
		Bureaucrat Bastien("Bastien", 1);
		Bureaucrat Theo("Theo", 75);
		Bureaucrat Hugo("Hugo", 150);
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}

	Bureaucrat Bastien("Bastien", 1);
	Bureaucrat Theo("Theo", 75);
	Bureaucrat Hugo("Hugo", 150);

	std::cout << Bastien << Theo << Hugo << std::endl;
	try {
		Theo.upper_grade();
		std::cout << Theo << std::endl;
		Theo.lower_grade();
		std::cout << Theo << std::endl;
		Bastien.upper_grade();
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}

	try
	{
		Hugo.lower_grade();
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}
	std::cout << Bastien << std::endl;
	std::cout << Hugo << std::endl;
	return (0);
}