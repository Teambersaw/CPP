/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:41:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/05 00:46:10 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <climits>
# include <cfloat>

class Convert
{
	public:

		Convert( void );
		Convert( Convert const & convert);
		Convert( char *str );
		~Convert( void );
		
		Convert & operator=( Convert const & convert);

		void	fromChar( void );
		void	fromInt( void );
		void	fromFloat( void );
		void	fromDouble( void );
		void	Impossible( void );


		void		searchType( void );
		void		convertType( void );

	private:

		std::stringstream	str;
		std::string			type;
		std::string			search;
		std::stringstream	check;
};

#endif