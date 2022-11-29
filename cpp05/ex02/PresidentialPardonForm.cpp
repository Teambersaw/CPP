/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:13:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 23:18:04 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Presidential_Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cpy ) : Form(cpy) {
	*this = cpy;
}

PresidentialPardonForm::PresidentialPardonForm( std::string &target ) : Form("Presidential_Pardon", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if (this != &rhs) {
		return (*this);
	}
	return (*this);
}