/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:58:28 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 01:30:50 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & cpy ) {
	(void) cpy;
}

Intern::~Intern( void ) {}

Intern & Intern::operator=( Intern const & rhs ) {
	(void) rhs;
	return (*this);
}

Form *Intern::makeForm(std::string Form_name, std::string target) {
	Form	*form;
	std::string tab[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++) {
		if (Form_name == tab[i])
			break;
	}
	switch (i)
	{
	case 0:
		
		break;
	
	default:
		break;
	}
	std::cout << "Intern creates " << Form_name << std::endl;
}

char const *Intern::NotFound::what(void) const throw() {
	return ("This form does not exist.");
}