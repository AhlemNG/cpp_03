/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:09:59 by anouri            #+#    #+#             */
/*   Updated: 2024/01/17 11:25:38 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/DiamondTrap.hpp"
#include "../incs/FragTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/ClapTrap.hpp"
#include "../incs/Colors.hpp"

DiamondTrap ::DiamondTrap () : ClapTrap()
{
    std::cout << GREEN << "Diamond Trap constractor called for " << _name << std::endl;
}

DiamondTrap ::~DiamondTrap ()
{
    std::cout << GREEN << "Diamond Trap destractor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    
}

DiamondTrap operator=(DiamondTrap const &rhs);



DiamondTrap:: DiamondTrap(std::string const name): ClapTrap(name)
{
    std::cout << GREEN << "DiamondTrap constractor called for " << _name << std::endl;
}

