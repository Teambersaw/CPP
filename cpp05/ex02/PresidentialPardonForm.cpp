/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:13:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 01:10:51 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("presidential pardon", 25, 5), target("default_target") {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cpy ) : Form(cpy) {
	this->target = cpy.target;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("presidential pardon", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

void PresidentialPardonForm::UseForm( void ) const {
	std::cout << this->target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}