/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 17:11:35 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public:

		Animal( void );
		Animal( Animal const &animal);
		~Animal( void );

		Animal & operator=( Animal const & animal);

		std::string	getType( void ) const;
		void		makeSound( void ) const;

	protected:

		std::string type;

};

#endif