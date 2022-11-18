/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:30 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 13:05:35 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include <iostream>

class Cure {

	protected:

	public:

		Cure( void );
		Cure( Cure const &Cure);
		~Cure( void );

		Cure & operator=( Cure const & Cure);

};

#endif