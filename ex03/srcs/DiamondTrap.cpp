/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:09:59 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 13:46:21 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/DiamondTrap.hpp"
#include "../incs/FragTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/ClapTrap.hpp"
#include "../incs/Colors.hpp"

DiamondTrap ::DiamondTrap ()
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << GREEN << "DiamondTrap constractor called for " << _name << std::endl;
    
}

DiamondTrap ::~DiamondTrap ()
{
    std::cout << GREEN << "DiamondTrap destractor called for " << _name << std::endl;
}


DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src) , ScavTrap(src), FragTrap(src)
{
    _name += src._name + "_copy";
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
}

DiamondTrap DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != &rhs)
    {
        _name += rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

DiamondTrap ::DiamondTrap (std::string const name) : ClapTrap(name+"_clap_name"), ScavTrap(name) , FragTrap(name)
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << GREEN << "DiamondTrap parametric constractor called for " << _name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI()
{
    std::cout << "I am a DaiamondTrap and my name is: " << _name << std::endl;
    std::cout << "my Ancestors are ClapTrap and my ethnic name is: " << ClapTrap::_name << std::endl;
}