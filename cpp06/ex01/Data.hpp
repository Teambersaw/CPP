/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:29:16 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 22:46:41 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data {

	public:

		Data( void );
		Data( Data const & cpy );
		~Data( void );

		Data & operator=( Data const & rhs );

		char const &getChar( void ) const;

	private:

		char	c;
};

#endif