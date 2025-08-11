/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:38:19 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 23:06:52 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== POKÉ-ARENA MATCH START ===" << std::endl;

    FragTrap frag("Pikabot");
    ScavTrap scav("Eeveebot");

    std::cout << "\n--- Round 1 ---" << std::endl;
    frag.attack("Pikabot");
    scav.attack("Eeveebot");

    std::cout << "\n--- Round 2 ---" << std::endl;
    frag.highFivesGuys();
    scav.guardGate();

    std::cout << "\n--- Copy Test ---" << std::endl;
    FragTrap fragCopy(frag);

    std::cout << "\n--- Assignment Test ---" << std::endl;
    FragTrap fragAssigned;
    fragAssigned = frag;

    std::cout << "\n=== MATCH END ===" << std::endl;
    return 0;
}
