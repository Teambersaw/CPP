/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 23:50:11 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat {

	public:

		Bureaucrat( void );
		Bureaucrat( std::string Name, int i);
		Bureaucrat( Bureaucrat const & Bureaucrat);
		~Bureaucrat( void );

		Bureaucrat & operator=( Bureaucrat const & Bureaucrat);

		void upper_grade( void );
		void lower_grade( void );

		std::string const & getName( void ) const;
		int	getGrade( void ) const;

	private:

		std::string const name;
		int	grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);