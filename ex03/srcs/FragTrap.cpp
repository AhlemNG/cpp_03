/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:36:43 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 17:48:31 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FragTrap.hpp"
#include "../incs/Colors.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    _attackDamage = 30;
    _energyPoints = 100;
    _hitPoints = 100;
    std::cout << YELLOW <<"FragTrap default constructor called for " << _name << RESET <<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW <<"FragTrap destructor called for " << _name << RESET <<std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
    std::cout<< YELLOW << "FragTrap copy constructor called for " << _name << RESET <<std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << YELLOW <<"FragTrap copy assignation operator called for " << _name << RESET <<std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name + "_copy";
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
    }
    return(*this);
}

FragTrap::FragTrap(const std::string & name): ClapTrap(name)
{
    _attackDamage = 20;
    _energyPoints = 50;
    _hitPoints = 100;
    std::cout << YELLOW << "FragTrap parametric constructor called for "<< _name << RESET <<std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << BOLD << BLUE <<"FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << RESET <<std::endl;
        std::cout << BOLD << BLUE <<"FragTrap " << _name << " has now " << --_energyPoints << " energy points" << RESET <<std::endl;
    }
    else if (_energyPoints <= 0)
        std::cout << BOLD <<GRAY <<"FragTrap " << _name << " does not have anough enegy points!"<< RESET << std::endl;
    else
        std::cout << BOLD << GRAY <<"FragTrap " << _name << " does not have anough hit points!"<< RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << ORANGE << "FragTrap " << _name <<": Gimme a HIFIVE DUUUDE " << RESET << std::endl;
}