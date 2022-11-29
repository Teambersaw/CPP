/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:08 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 23:18:15 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string &target );
		PresidentialPardonForm( PresidentialPardonForm const & PresidentialPardonForm);
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & PresidentialPardonForm);

	private:

};

#endif