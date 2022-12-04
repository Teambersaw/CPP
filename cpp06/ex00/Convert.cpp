/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:47:47 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/05 00:43:57 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) : type("impossible"), search("impossible") {
		this->str << "impossible";
		this->check << "impossible";
};

Convert::Convert( Convert const & convert) {
	this->str << convert.str.rdbuf();
	this->type = convert.type;
	this->search = convert.search;
	this->check << convert.check.rdbuf();
}

Convert::Convert( char *str ) : type("impossible") {
	if (str == NULL) {
		this->str << "impossible";
		this->check << "impossible";
		this->search = "impossible";
	}
	else {
		this->str << str;
		this->check << str;
		this->search = str;
	}
}

Convert::~Convert( void ) {};

Convert & Convert::operator=( Convert const & convert) {
	if (this != &convert) {
		this->str.str(std::string());
		this->str << convert.str.rdbuf();
		this->type = convert.type;
		this->check.str(std::string());
		this->check << convert.check.rdbuf();
		this->search = convert.search;
	}
	return (*this);
}

void	Convert::searchType( void )
{
	if (search.empty())
		return ;
	if (search == "-inf" || search == "+inf" ||  search == "nan") {
		this->type = "double";
		return ;
	}
	if (search == "-inff" || search == "+inff" ||  search == "nanf") {
		this->type = "float";
		return ;
	}
	int size = search.size();
	bool	sign = false;
	if (size == 1) {
		if (std::isdigit(search[0]))
			this->type = "int";
		else
			this->type = "char";
		return ;
	}
	if (search[0] != '+' && search[0] != '-' && !std::isdigit(search[0]))
		return ;
	if (search[0] == '+' || search[0] == '-')
		sign = true;
	if ((sign && size == 2 && (search[1] == 'f' || search[1] == '.')) || search[size - 1] == '.' || (sign && search[1] == '.'))
		return ;
	int nb_point;
	if (sign)
		nb_point = 1;
	else
		nb_point = 0;
	while (nb_point < size) {
		if (!std::isdigit(search[nb_point]))
			break ;
		nb_point++;
	}
	if (nb_point == size) {
		this->type = "int";
		return ;
	}
	nb_point = 0;
	for (int i = 1; i < size; i++)
	{
		if (!std::isdigit(search[i]))
		{
			if ((search[i] != '.' && search[i] != 'f') || (search[i] == 'f' && i != (size - 1))) {
				this->type = "impossible";
				return ;
			}
			if ((i == (size - 1) && search[i] == 'f'))
				this->type = "float";
			else if (search[i] == '.')
			{
				nb_point += 1;
				this->type = "double";
			}
			if (search[i] == '.' && search[i + 1] == 'f')
			{
				this->type = "impossible";
				return ;
			}
		}
		if (nb_point > 1) {
			this->type = "impossible";
			return ;
		}
	}
}

void	Convert::convertType( void ) {
	std::string tab[5] = { "char", "int", "float", "double", "impossible" };
	void	(Convert::*f[5])() = { &Convert::fromChar, &Convert::fromInt, &Convert::fromFloat, &Convert::fromDouble, &Convert::Impossible };
	for (int i = 0; i < 5; i++) {
		if (tab[i] == this->type)
			(this->*f[i])();
	}
}

void	Convert::fromChar( void )
{
	char	c = ' ';
	this->str >> c;
	if (c >= 32 && c < 127)
		std::cout << "char: '" << c << "'" <<std::endl;
	else if (c >= 0 && c < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	Convert::fromInt( void )
{
	int	nb;
	long long int check;

	this->check >> check;
	if (check < INT_MIN || check > INT_MAX)
	{
		this->Impossible();
		return ;
	}

	this->str >> nb;
	if (nb >= 32 && nb < 127)
		std::cout << "char: '" << static_cast<char>(nb) << "'" <<std::endl;
	else if (nb >= 0 && nb < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;


	std::cout << "int: " << nb << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	Convert::fromFloat( void )
{
	float	nb;
	double check;
	if (search == "-inff" || search == "+inff" ||  search == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << this->search << std::endl;
		this->search.erase(search.size() - 1);
		std::cout << "double: " << this->search << std::endl;
		return ;
	}
	this->check >> check;
	if (check < -FLT_MAX|| check > FLT_MAX)
	{
		this->Impossible();
		return ;
	}

	this->str >> nb;
	if (nb >= 32 && nb < 127)
		std::cout << "char: '" << static_cast<char>(nb) << "'" <<std::endl;
	else if (nb >= 0 && nb < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;


	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << nb << 'f' <<std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	Convert::fromDouble( void ) {
	double	nb;
	long double check;
	if (search == "-inf" || search == "+inf" ||  search == "nan") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << this->search << 'f' <<std::endl;
		std::cout << "double: " << this->search << std::endl;
		return ;
	}
	this->check >> check;
	if (check < -DBL_MAX || check > DBL_MAX)
	{
		this->Impossible();
		return ;
	}
	this->str >> nb;


	if (nb >= 32 && nb < 127)
		std::cout << "char: '" << static_cast<char>(nb) << "'" <<std::endl;
	else if (nb >= 0 && nb < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;


	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;


	std::cout << std::fixed << std::setprecision(1);
	if (nb > FLT_MAX || nb < -FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << 'f' <<std::endl;


	std::cout << "double: " << nb << std::endl;
}

void	Convert::Impossible( void ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

