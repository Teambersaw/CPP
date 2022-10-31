/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:17:19 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:00:44 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		void set_first_name(void);
		void set_last_name(void);
		void set_nickname(void);
		void set_phone_number(void);
		void set_darkest_secret(void);
		void get_contact(int index);
		void aff_contact(void);

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

};

#endif