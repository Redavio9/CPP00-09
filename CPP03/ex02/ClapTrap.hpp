/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:52 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 10:57:00 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
  protected:
    std::string name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap &operator=(const ClapTrap &assign);
    ClapTrap(const ClapTrap &copy);
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif