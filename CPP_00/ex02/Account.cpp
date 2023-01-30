// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Dec 14 9:45:02 1989                      //
//                Last update : Wed Dec 14 11:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
# include <iostream>

Account::Account(int ininitial_deposit)
{
	std::cout << "Default Account Constructor called." << std::endl;
	_totalAmount = ininitial_deposit;
	return ;
}

Account::Account(void)
{
	std::cout << "Private Constructor called" << std::endl;
	return ;
}

Account::~Account(void)
{
	std::cout << "Default Account DESTRUCTOR called." << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << _nbAccounts << std::endl;
	std::cout << _totalAmount << std::endl;
	std::cout << _totalNbDeposits << std::endl;
	std::cout << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	std::cout << _accountIndex << std::endl;
	std::cout << _nbDeposits << std::endl;
	std::cout << _nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
	std::cout << _amount << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_totalAmount - withdrawal < 0)
		return (false);
	else
	{
		_totalAmount -= withdrawal;
		return (true);
	}
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //