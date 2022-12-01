/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:14:24 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 21:56:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Shrubbery", 145, 137), target("default_target") {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & cpy ) : Form(cpy) {
	this->target = cpy.target;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("Shrubbery", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

void ShrubberyCreationForm::UseForm( void ) const {

	std::ofstream ofs((target + "_shrubbery").c_str());

	ofs << "     .{{}}}}}}.              .{{}}}}}}.              .{{}}}}}}.              .{{}}}}}}.      " <<std::endl;
	ofs << "    {{{{{{(`)}}}.           {{{{{{(`)}}}.           {{{{{{(`)}}}.           {{{{{{(`)}}}.    " <<std::endl;
	ofs << "   {{{(`)}}}}}}}}}         {{{(`)}}}}}}}}}         {{{(`)}}}}}}}}}         {{{(`)}}}}}}}}}   " <<std::endl;
	ofs << "  }}}}}}}}}{{(`){{{       }}}}}}}}}{{(`){{{       }}}}}}}}}{{(`){{{       }}}}}}}}}{{(`){{{  " <<std::endl;
	ofs << "  }}}}{{{{(`)}}{{{{       }}}}{{{{(`)}}{{{{       }}}}{{{{(`)}}{{{{       }}}}{{{{(`)}}{{{{  " <<std::endl;
	ofs << " {{{(`)}}}}}}}{}}}}}     {{{(`)}}}}}}}{}}}}}     {{{(`)}}}}}}}{}}}}}     {{{(`)}}}}}}}{}}}}} " <<std::endl;
	ofs << "{{{{{{{{(`)}}}}}}}}}}   {{{{{{{{(`)}}}}}}}}}}   {{{{{{{{(`)}}}}}}}}}}   {{{{{{{{(`)}}}}}}}}}}" <<std::endl;
	ofs << "{{{{{{{}{{{{(`)}}}}}}   {{{{{{{}{{{{(`)}}}}}}   {{{{{{{}{{{{(`)}}}}}}   {{{{{{{}{{{{(`)}}}}}}" <<std::endl;
	ofs << " {{{{{(`)   {{{{(`)}'    {{{{{(`)   {{{{(`)}'    {{{{{(`)   {{{{(`)}'    {{{{{(`)   {{{{(`)}'" <<std::endl;
	ofs << "  `\"\"\'\" |   | \"\'\"\'`       `\"\"'\" |   | \"\'\"\'`       `\"\"\'\" |   | \"\'\"\'`       `\"\"\'\" |   | \"\'\"\'`  " <<std::endl;
	ofs << "  (`)  /     \\            (`)  /     \\            (`)   /    \\            (`)  /     \\       " <<std::endl;
	ofs.close();
}