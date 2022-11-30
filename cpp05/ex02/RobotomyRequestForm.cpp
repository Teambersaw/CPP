/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:14:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 15:29:19 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Robotomy", 72, 45), target("default_target") {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cpy ) : Form(cpy) {
	*this = cpy;
}

RobotomyRequestForm::RobotomyRequestForm( std::string &target ) : Form("Robotomy", 72, 45) {
	(void) target;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if (this != &rhs) {
		return (*this);
	}
	return (*this);
}