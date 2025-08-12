/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:40:11 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/12 19:27:33 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) 
:name (name), hitPoints (10), energyPoints (10), attackDamage (0)
{
    std::cout << "[POKÉDEX] A wild ClapTrap named " << name << " appeared! HP: "<<
    hitPoints << ", Energy: " << energyPoints << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
:name (other.name), hitPoints (other.hitPoints), energyPoints (other.energyPoints), attackDamage (other.attackDamage)
{
    std::cout << "[POKÉDEX] A Ditto of ClapTrap " << name << " has appeared!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "[POKÉDEX] ClapTrap " << name << " learned a new move (copy assigment)!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[POKÉMON CENTER]" << " ClapTrap " << name << " fainted and returned to its Poké Ball!" << std::endl;
}


//Public methods
void ClapTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
    {
        std::cout << "[POKÉDEX] ClapTrap " << name << " is fainted and can't attack!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "[POKÉDEX] ClapTrap " << name << " has no pp (energy) to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "[POKÉDEX] ClpaTrap " << name << " used tackle on " << target << "! It dealt " << attackDamage << " damage points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "[POKÉDEX]" << name << " is already fainted!" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "[POKÉDEX]" << name << " took " << amount << " damage! HP left: " << hitPoints << std::endl;
    
    if (hitPoints == 0)
    {
        std::cout << "[POKÉDEX]" << name << " fainted!" << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "[POKÉDEX]" << name << " cant't heal because it is fainted!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "[POKÉDEX]" << name << " has no pp(energy) left to heal!" << std::endl;
        return;
    }

    energyPoints--;
    hitPoints += amount;
    std::cout << "[POKÉDEX]" << name << " used potion and recovered " << amount << " HP! Current HP: "<< hitPoints << std::endl;
}