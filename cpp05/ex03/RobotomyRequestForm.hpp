/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:25 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 21:49:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & cpy);
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

		virtual void UseForm( void ) const;

	private:

		std::string target;
};

#endif