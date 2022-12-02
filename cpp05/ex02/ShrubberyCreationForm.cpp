/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:14:24 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/02 16:12:47 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("shrubbery creation", 145, 137), target("default_target") {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & cpy ) : Form(cpy) {
	this->target = cpy.target;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

void ShrubberyCreationForm::UseForm( void ) const {

	std::ofstream ofs((target + "_shrubbery").c_str());
	if (!ofs.is_open())
		return ;
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