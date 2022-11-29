/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:14:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 23:18:27 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Robotomy", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cpy ) : Form(cpy) {
	*this = cpy;
}

RobotomyRequestForm::RobotomyRequestForm( std::string &target ) : Form("Robotomy", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if (this != &rhs) {
		return (*this);
	}
	return (*this);
}