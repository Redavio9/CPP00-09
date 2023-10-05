/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:44:33 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/04 14:40:08 by rarraji          ###   ########.fr       */
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
ClapTrap::ClapTrap(const ClapTrap &copy)
{
  this->name = copy.name;
  this->Hit_points = copy.Hit_points;
  this->Energy_points = copy.Energy_points;
  this->Attack_damage = copy.Attack_damage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
  this->name = assign.name;
  this->Hit_points = assign.Hit_points;
  this->Energy_points = assign.Energy_points;
  this->Attack_damage = assign.Attack_damage;
  return(*this);
}

void ClapTrap::attack(const std::string& target)
{
  this->Energy_points--;
  std::cout << "reda\n";
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