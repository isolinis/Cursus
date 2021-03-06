/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:12:19 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/27 18:47:38 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iomanip>
#include <iostream>

//attributes
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//constructor & destructor
Account::Account(int initial_deposit) : _amount(initial_deposit) {
    this->_displayTimestamp();
    std::cout
        << "index:" << this->getNbAccounts()
        << ";"
        << "amount:" << initial_deposit
        << ";"
        << "created" << std::endl;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
}

Account::~Account(void) {
    Account::_nbAccounts -= 1;
    this->_displayTimestamp();
    std::cout
        << "index:" << this->getNbAccounts()
        << ";"
        << "amount:" << this->_amount
        << ";"
        << "closed" << std::endl;
}

//getters 
int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}

//methods
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout
        << "accounts:" << getNbAccounts()
        << ";"
        << "total:" << getTotalAmount()
        << ";"
        << "deposits:" << getNbDeposits()
        << ";"
        << "withdrawals:" << getNbWithdrawals()
        << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex
        << ";"
        << "amount:" << this->_amount
        << ";"
        << "deposits:" << this->_nbDeposits
        << ";"
        << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec;
    std::cout << "] ";
}

void Account::makeDeposit(int deposit) {
    if (deposit > 0) {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex
                  << ";"
                  << "p_amount:" << this->_amount;
        this->_nbDeposits += 1;
        this->_amount += deposit;
        Account::_totalNbDeposits += 1;
        Account::_totalAmount += deposit;
        std::cout << ";"
                  << "deposit:" << deposit
                  << ";"
                  << "amount:" << this->_amount
                  << ";"
                  << "nb_deposits:" << this->_nbDeposits
                  << std::endl;
    } else {
        std::cout << "Deposit is negative" << std::endl;
    }
}

bool Account::makeWithdrawal(int withdrawal) {
    if (withdrawal > 0) {
        if (this->_amount > withdrawal) {
            _displayTimestamp();
            std::cout << "index:" << this->_accountIndex
                      << ";"
                      << "p_amount:" << this->_amount;
            this->_nbWithdrawals += 1;
            this->_amount -= withdrawal;
            Account::_totalNbWithdrawals += 1;
            Account::_totalAmount -= withdrawal;
            std::cout << ";"
                      << "withdrawal:" << withdrawal
                      << ";"
                      << "amount:" << this->_amount
                      << ";"
                      << "nb_withdrawals:" << this->_nbWithdrawals
                      << std::endl;
            return (true);
        } else {
            _displayTimestamp();
            std::cout << "index:" << this->_accountIndex
                      << ";"
                      << "p_amount:" << this->_amount
                      << ";"
                      << "withdrawal:refused"
                      << std::endl;
            return (false);
        }
    }
    std::cout
        << "Withdrawal is negative" << std::endl;
    return (false);
}

int Account::checkAmount(void) const {
    return (this->_amount);
}
