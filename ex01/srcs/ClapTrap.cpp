/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:22:04 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 17:01:43 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/Colors.hpp"

ClapTrap::ClapTrap()
{
    _name = "no name";
    _attackDamage = 0;
    _energyPoints = 10;
    _hitPoints = 10;
    std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap destructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    this->_name = src._name + "_copy";
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_hitPoints = src._hitPoints;
    std::cout <<"ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout <<"ClapTrap copy assigniation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints; 
    }
    return(*this);
}

ClapTrap::ClapTrap(const std::string & name)
{
    _name = name;
    _attackDamage = 0;
    _energyPoints = 10;
    _hitPoints = 10;
    std::cout <<"ClapTrap parametric constructor called for "<< _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    /*target is the name of an ClapTrap instance?*/
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << BLUE <<"ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << RESET <<std::endl;
        std::cout << BLUE <<"ClapTrap " << _name << " has now " << --_energyPoints << " energy points" << RESET <<std::endl;
    }
    else if (_energyPoints <= 0)
        std::cout << GRAY <<"ClapTrap " << _name << " does not have anough enegy points!"<< RESET << std::endl;
    else
        std::cout << GRAY <<"ClapTrap " << _name << " does not have anough hit points!"<< RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
   if (_hitPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << RED <<"ClapTrap " << _name << " took " << amount << " of damage." << RESET << std::endl;
        std::cout << RED <<"ClapTrap " << _name << " has now " << _hitPoints << " hit points" << RESET << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << GREEN << "ClapTrap " << _name << " got repaired and took " << amount << " of hit points." << RESET << std::endl;  
    }
    else if (_energyPoints <= 0)
        std::cout << GRAY <<"ClapTrap " << _name << " does not have anough enegy points!"<< RESET << std::endl;
    else
        std::cout << GRAY <<"ClapTrap " << _name << " does not have anough hit points!"<< RESET << std::endl;
}
