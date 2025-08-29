/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:32:09 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/29 20:32:44 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "[POKÉDEX] A wild ScavTrap named " << this->name << " joins the battle! HP: "
    << hitPoints << ", PP (energy): " << energyPoints << ", Attack: "
    << attackDamage << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "[POKEDEX] A Ditto of ScavTrap named " << other.name << " has been created!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "[POKÉDEX] ScavTrap " << name << " copied another's stats!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[POKÉMON CENTER] ScavTrap " << name << " has fainted!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " is fainted and can't attack!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " has no pp(energy) left to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "[BATTLE] ScavTrap " << name << " used guardian strike on " << target << "! It dealt "
    << attackDamage << " damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "[ABILITY] ScavTrap " << name << " is now in gate keeper mode! Defense sharply rose!" << std::endl;
}