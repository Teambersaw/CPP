/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:47:51 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 14:12:09 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl {

	public:

		Harl( void );
		~Harl( void );

		void filter(std::string level);
		void complain( int i );

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif