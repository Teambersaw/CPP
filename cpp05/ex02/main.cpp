/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 16:04:57 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bastien("Bastien", 1);
		Bureaucrat Theo("Theo", 75);
		Bureaucrat Hugo("Hugo", 150);
		ShrubberyCreationForm Form1("oui");
		//Form		Form2("Apero", 500, 0);

		Form1.UseForm();
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}
	return (0);
}