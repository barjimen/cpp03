/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:38:19 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 19:12:48 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap c1("Pikabot");
    ClapTrap c2("Charmatron");

    c1.attack("Charmatron");
    c2.takeDamage(3);

    c2.beRepaired(5);
    c2.attack("Pikabot");

    c1.takeDamage(12);
    c1.beRepaired(4);
    c1.attack("Charmatron");

    return 0;
}