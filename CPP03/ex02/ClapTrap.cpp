/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:44:33 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/11 11:44:35 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  this->name = "default";
	std::cout << "ClapTrap_Name : " << this->name << std::endl;
  this->Hit_points = 10;
  this->Energy_points = 10;
  this->Attack_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
  this->name = name;
  std::cout << "ClapTrap_Name : " << this->name << std::endl;
  this->Hit_points = 10;
  this->Energy_points = 10;
  this->Attack_damage = 0;
}
ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  this->Energy_points--;
  std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  this->Hit_points -= amount;
		std::cout << "ClapTrap " << this->name << " take Damage " << amount << " , remaning hp is " << this->Energy_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  this->Energy_points--;
  this->Hit_points += amount;
  std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " and remaning hp is " << this->Energy_points << std::endl;
}