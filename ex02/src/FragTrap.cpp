/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:58:33 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 23:08:47 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("DefaultFrag")
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "[POKÉDEX] FragTrap " << name 
              << " appeared! (HP: 100 | EP: 100 | ATK: 30)" << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(const std::string &n) : ClapTrap(n)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "[POKÉDEX] FragTrap " << name 
              << " appeared! (HP: 100 | EP: 100 | ATK: 30)" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "[POKÉDEX] FragTrap " << name 
              << " was cloned from " << other.name << "!" << std::endl;
}

// Assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "[POKÉDEX] FragTrap " << name 
              << " copied the battle stats of " << other.name << "!" << std::endl;
    return *this;
}

// Destructor
FragTrap::~FragTrap()
{
    std::cout << "[POKÉDEX] FragTrap " << name 
              << " fainted! Removed from battle." << std::endl;
}

// Special ability
void FragTrap::highFivesGuys(void)
{
    std::cout << "[ARENA] FragTrap " << name 
              << " requests a **High Five** from the team! ✋" << std::endl;
}

// Overridden attack
void FragTrap::attack(const std::string &target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        std::cout << "[BATTLE] FragTrap " << name 
                  << " used **Mega Punch** on " << target 
                  << "! It dealt " << attackDamage << " damage points!" << std::endl;
        energyPoints--;
        std::cout << "[STATUS] " << name << " - HP: " << hitPoints 
                  << " | EP: " << energyPoints << std::endl;
    }
    else
    {
        std::cout << "[BATTLE] FragTrap " << name 
                  << " has no energy or has fainted! Cannot attack!" << std::endl;
    }
}
