/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:47:06 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal {

	public:

		Dog( void );
		Dog( Dog const &Dog);
		virtual	~Dog( void );

		Dog & operator=( Dog const & Dog);

		virtual void	makeSound( void ) const;
};

#endif