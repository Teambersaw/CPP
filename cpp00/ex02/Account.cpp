/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:13:33 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 15:18:12 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <chrono>
#include <iostream>

void	Account::_displayTimestamp( void ) {
	time_t const now = time(NULL);

	std::cout << '[' << std::put_time(localtime(&now), "%Y%m%d_%I%M%S") << "] ";
	return ;
}

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts) {
	Account::_nbAccounts += 1;
	Account::_amount += initial_deposit;
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account( void ) {
	Account::_nbAccounts += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	if (_amount > withdrawal) {
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals<< std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return true;
	}
	else {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit<< ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	return ;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
