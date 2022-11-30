/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:13:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 15:27:34 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Presidential_Pardon", 25, 5), target("default_target") {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cpy ) : Form(cpy) {
	*this = cpy;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Presidential_Pardon", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if (this != &rhs) {
		return (*this);
	}
	return (*this);
}