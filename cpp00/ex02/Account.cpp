#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;

void	Account::_displayTimestamp( void )
{

	std::time_t current_time = std::time(NULL);
    std::cout << "[" << current_time << "]";
}

Account::Account()
{
	std::cout << "Default constructor called" << std::endl;
}

Account::Account(int initial_deposit) 
{
	static	int x = 0;
	static	int y = 1;
	this->_amount = initial_deposit;
	this->_accountIndex = x;
	this->_nbAccounts = y;
	this->_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	x+=1;
	y+=1;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() 
		<< ";deposits:" << getNbDeposits() << ";withdrawls:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int pre = this->_amount;
	this->_amount += deposit;
	_displayTimestamp();
	this->_nbDeposits += 1;
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << pre << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_totalAmount += deposit;
	this->_totalNbDeposits += this->_nbDeposits;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	pre = this->_amount;
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << pre << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
	}
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << pre << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals  += this->_nbWithdrawals;
	return (true);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<  ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
