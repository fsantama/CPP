/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:27:53 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/03 10:27:53 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Inicialización de las variables estáticas
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor: inicializa una cuenta con un depósito inicial
Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    this->_accountIndex = Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

// Destructor: cierra la cuenta
Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

// Realiza un depósito
void Account::makeDeposit(int deposit) {
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

// Realiza un retiro si es posible, devuelve true si fue exitoso, de lo contrario false
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

// Devuelve la cantidad actual de la cuenta
int Account::checkAmount(void) const {
    return this->_amount;
}

// Muestra el estado de la cuenta actual
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
              << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Métodos estáticos

// Muestra información general sobre las cuentas
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount 
              << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// Muestra la marca de tiempo en el formato deseado
void Account::_displayTimestamp( void ) {
    std::time_t now = std::time(NULL);
    std::tm* local_time = std::localtime(&now);
    
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);
    std::cout << "[" << buffer << "] ";
}


// Devuelve el número total de cuentas
int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

// Devuelve la cantidad total de todas las cuentas
int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

// Devuelve el número total de depósitos
int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

// Devuelve el número total de retiros
int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}
