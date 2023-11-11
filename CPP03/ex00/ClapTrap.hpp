/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:45:38 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/09 13:07:03 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
  private:
      std::string name;
      int Hit_points;
      int Energy_points;
      int Attack_damage;
  public:
      ClapTrap();
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap &copy);
      ClapTrap operator=(const ClapTrap &assign);
      ~ClapTrap();
      void attack(const std::string& target);
      void takeDamage(unsigned int amount);
      void beRepaired(unsigned int amount);
};

#endif