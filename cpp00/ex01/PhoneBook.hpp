/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:20:15 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:00:59 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void add(void);
		void search(void);

	private:

		int		_max_contact;
		int		_nb_contact;
		Contact _contact[8];
};

#endif