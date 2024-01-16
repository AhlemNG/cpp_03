/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:05:16 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 15:36:57 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/Colors.hpp"

int main()
{
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;
	ClapTrap  a("GOGO");
	ClapTrap  b("GIGI");
	ClapTrap c(a);
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;
	a.attack("GIGI");
	b.takeDamage(1);
	ClapTrap d = b;
	d.takeDamage(1); 
	a.attack("GIGI");
	b.beRepaired(15);
	a.beRepaired(3);
	
	for (int i = 0; i < 8; i++)
		a.attack("GIGI");
	b.beRepaired(3);
	std::cout << MAGENTA << "*****************************************************" <<RESET <<std::endl;

	return (0);
}