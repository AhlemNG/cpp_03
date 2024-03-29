/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:59:40 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 12:14:14 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name; /*same as ClapTrap*/
    public:
        DiamondTrap ();
        ~DiamondTrap ();
        DiamondTrap(DiamondTrap const &src);
        DiamondTrap operator=(DiamondTrap const &rhs);
        DiamondTrap(std::string const name);

        void attack(std::string const &target);
        void WhoAmI();
};

#endif