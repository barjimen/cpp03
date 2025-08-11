/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:38:19 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 22:26:47 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main() {
    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("Bulbabot");

    std::cout << "\n--- Attacking ---" << std::endl;
    scav.attack("Pikabot");

    std::cout << "\n--- Using special ability ---" << std::endl;
    scav.guardGate();

    std::cout << "\n--- Copy & Assign ---" << std::endl;
    ScavTrap scavCopy(scav);
    ScavTrap scavAssigned("Temp");
    scavAssigned = scav;

    std::cout << "\n--- Destructor chain test ---" << std::endl;
    return 0;
}