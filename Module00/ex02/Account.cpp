/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:10:05 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:10:06 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	this->_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<this->checkAmount()<<";created"<<std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t Time_now = std::time(NULL);
	std::tm* localTime = std::localtime(&Time_now);
	char buffer[50];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buffer << "";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	temp_amount = this->_amount;

	this->_amount -= withdrawal;
	_displayTimestamp();
	if (this->_amount < 0)
	{
		std::cout<<" index:"<<this->_accountIndex<<";p_amount:"
		<<temp_amount<<";withdrawal:refused"<<std::endl;
		this->_amount = temp_amount;
		return (false);
	}
	this->_totalNbWithdrawals++;
	this->_nbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
	std::cout<<" index:"<<this->_accountIndex<<";p_amount:"
		<<temp_amount<<";withdrawal:"<<withdrawal<<";amount:"<<_amount
		<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return (true);
}

void	Account::makeDeposit(int deposit)
{
	int temp_amount = this->_amount;

	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";p_amount:"
			<<temp_amount<<";deposit:"<<deposit<<";amount:"<<_amount
			<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->checkAmount()
			<<";deposits:"<<this->_nbDeposits<<";withdrawals:"
			<<_nbWithdrawals<<std::endl;

}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<" accounts:"<<getNbAccounts()<<";total:"<<getTotalAmount()<<";deposits:"
			<<getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}
