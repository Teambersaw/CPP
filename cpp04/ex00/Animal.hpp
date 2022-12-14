/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/19 16:22:54 by jrossett         ###   ########.fr       */
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

		std::string		const &getType( void ) const;
		virtual	void	makeSound( void ) const;

	protected:

		std::string type;

};

#endif