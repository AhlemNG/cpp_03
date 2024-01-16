/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:05:16 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 17:49:57 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/Colors.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"

int main()
{
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;
	ClapTrap  a("GOGO");
	ScavTrap f("youyou");
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;
	a.attack("GIGI");
	f.attack("some Robot");
	f.guardGate();
	a.attack("GIGI");
	a.beRepaired(3);
	FragTrap g("Fraggy");
	g.highFivesGuys();
	// for (int i = 0; i < 8; i++)
	// 	a.attack("GIGI");
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;

	return (0);
}