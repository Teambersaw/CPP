/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 13:05:04 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{	
	Bureaucrat Theo("Théo", 45);
	Bureaucrat Bastien("Bastien", 1);
	Bureaucrat Hugo("Hugo", 146);
	Intern someRandomIntern;
	Form* rrf;
	Form* bppf;
	Form* scf;
	try
	{
		rrf = someRandomIntern.makeForm("T.O", "T.O REJIM");
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	rrf = someRandomIntern.makeForm("robotomy request", "T.O REJIM");
	bppf = someRandomIntern.makeForm("presidential pardon", "Marco");
	scf = someRandomIntern.makeForm("shrubbery creation", "Arboretum");
	std::cout << std::endl;

	Bastien.executeForm(*rrf);
	Bastien.signForm(*rrf);
	Bastien.executeForm(*rrf);
	std::cout << std::endl;

	Bastien.signForm(*scf);
	Bastien.executeForm(*scf);
	std::cout << std::endl;

	Bastien.signForm(*bppf);
	Bastien.executeForm(*bppf);

	delete rrf;
	delete bppf;
	delete scf;
	return (0);
	
}
