/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:45:13 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 14:30:21 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

/*
    will inherit const and dest from ClapTrap
    its const / dest / and attack will print different messages     
*/

/* ScavTrap is a ClapTrap that has a spcific behaviour*/

class ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const &src);
        ScavTrap & operator=(ScavTrap const &rhs);
        virtual ~ScavTrap();

        ScavTrap(const std::string & name);

        virtual void attack(const std::string &target);
        void guardGate();
};

#endif