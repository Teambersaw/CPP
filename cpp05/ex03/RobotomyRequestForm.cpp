/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:14:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 21:56:00 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Robotomy", 72, 45), target("default_target") {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cpy ) : Form(cpy) {
	this->target = cpy.target;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

void RobotomyRequestForm::UseForm( void ) const {
	std::srand(std::time(NULL));
	std::cout << "BZZZZZZZ BZZZZZZZZZ BZZZZZZZZZZZZ" << std::endl;
	if (std::rand() % 2)
		std::cout << this->target << " was robotomized." << std::endl;
	else
		std::cout << "The operation failed." << std::endl;
}