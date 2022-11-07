/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:55:44 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/05 12:02:09 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain {

	public:

		Brain( void );
		Brain( Brain const &Brain);
		virtual ~Brain( void );

		Brain & operator=( Brain const & Brain);

	protected:

		std::string ideas[100];

};

#endif