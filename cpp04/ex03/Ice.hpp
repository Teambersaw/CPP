/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:22 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 13:05:54 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

# include <iostream>

class Ice {

	protected:

	public:

		Ice( void );
		Ice( Ice const &Ice);
		~Ice( void );

		Ice & operator=( Ice const & Ice);

};

#endif