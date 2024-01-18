/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:45:13 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 10:08:52 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

/*
    will inherit const and dest from ClapTrap
    its const / dest / and attack will print different messages     
*/

/* FragTrap is a ClapTrap that has a spcific behaviour*/

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        FragTrap(FragTrap const &src);
        FragTrap & operator=(FragTrap const &rhs);
        ~FragTrap();

        FragTrap(const std::string & name);

        virtual void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif