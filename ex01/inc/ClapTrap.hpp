/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:38:40 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 21:17:03 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
class ClapTrap
{
    //We change from private to protected
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    virtual ~ClapTrap();//for polymorphic cleanup

    virtual void attack(const std::string &target); //virtual so we can override
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};