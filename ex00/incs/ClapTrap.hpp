/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:12:21 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 15:23:31 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{   
    private:
        std::string _name;
        int _hitPoints; /*initilized to 10*/
        int _energyPoints;/*initilized to 10*/
        int _attackDamage;/*initilized to 10*/
    public:
        ClapTrap();/*default constructor*/
        ~ClapTrap(); /*destructor*/
        ClapTrap(ClapTrap const &src);/*copy constructor*/
        ClapTrap operator=(ClapTrap const &rhs); /*copy assignment operator*/
        
        ClapTrap(const std::string & name);/*parametric constructor*/

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif