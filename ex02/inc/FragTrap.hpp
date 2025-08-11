/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:43:13 by barjimen          #+#    #+#             */
/*   Updated: 2025/08/11 22:58:20 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();

    //Special ability
    void highFivesGuys(void);
    //Override attk
    void attack(const std::string &target);
};
