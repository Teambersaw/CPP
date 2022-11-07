/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 00:44:11 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public:

		Animal( void );
		Animal( Animal const &animal);
		virtual ~Animal( void );

		Animal & operator=( Animal const & animal);

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;

	protected:

		std::string type;

};

#endif