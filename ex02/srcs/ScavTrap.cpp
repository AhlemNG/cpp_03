/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:36:43 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 17:53:56 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Colors.hpp"
#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    _attackDamage = 20;
    _energyPoints = 50;
    _hitPoints = 100;
    std::cout << MAGENTA <<"ScavTrap default constructor called for " << _name << RESET <<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << MAGENTA <<"ScavTrap destructor called for " << _name << RESET <<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
    std::cout<< MAGENTA << "ScavTrap copy constructor called for " << _name << RESET <<std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << MAGENTA <<"ScavTrap copy assignation operator called for " << _name << RESET <<std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name + "_copy";
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
    }
    return(*this);
}

ScavTrap::ScavTrap(const std::string & name): ClapTrap(name)
{
    _attackDamage = 20;
    _energyPoints = 50;
    _hitPoints = 100;
    std::cout << MAGENTA << "ScavTRap parametric constructor called for "<< _name << RESET <<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << BOLD << LMAGENTA <<"ScavTRap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << RESET <<std::endl;
        std::cout << BOLD << LMAGENTA <<"ScavTRap " << _name << " has now " << --_energyPoints << " energy points" << RESET <<std::endl;
    }
    else if (_energyPoints <= 0)
        std::cout << BOLD <<GRAY <<"ScavTRap " << _name << " does not have anough enegy points!"<< RESET << std::endl;
    else
        std::cout << BOLD << GRAY <<"ScavTRap " << _name << " does not have anough hit points!"<< RESET << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << MAGENTA << "ScavTrap " << _name << " is now in Gate keeper mode" << RESET << std::endl;
}