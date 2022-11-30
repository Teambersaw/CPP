/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 10:55:25 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bastien("Bastien", 1);
		Bureaucrat Theo("Theo", 75);
		Bureaucrat Hugo("Hugo", 150);
		//Bureaucrat Julot("Julot", 500);

		std::cout << Bastien << Theo << Hugo << std::endl;

		Theo.upper_grade();
		std::cout << Theo << std::endl;
		Theo.lower_grade();
		std::cout << Theo << std::endl;

		Bastien.upper_grade();
		std::cout << Bastien << std::endl;

		Hugo.lower_grade();
		std::cout << Hugo << std::endl;
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}
	return (0);
}