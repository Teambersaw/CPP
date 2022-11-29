/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:25 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 23:18:22 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string &target );
		RobotomyRequestForm( RobotomyRequestForm const & cpy);
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

	private:

};

#endif