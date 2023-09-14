/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:49:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 10:59:04 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "FragTrap_Name : " << this->name << std::endl;
}

FragTrap::FragTrap( std::string _name): ClapTrap(_name) 
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "FragTrap_Name : " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
  his->name = copy.name;
  this->Hit_points = copy.Hit_points;
  this->Energy_points = copy.Energy_points;
  this->Attack_damage = copy.Attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
  this->name = assign.name;
  this->Hit_points = assign.Hit_points;
  this->Energy_points = assign.Energy_points;
  this->Attack_damage = assign.Attack_damage;
  return(*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap "<< this->name << " has been destroyed." << std::endl;
}

void	FragTrap::attack(std::string const & target) 
{
	std::cout << "FragTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of Attack_damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) 
{
		this->Hit_points -= amount;
		std::cout << "FragTrap " << this->name << " take Attack_damage " << amount << " , remaning hp is " << this->Energy_points << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) 
{
		this->Hit_points += amount;
		std::cout << "FragTrap " << this->name << " is repaired by " << amount << " and remaning hp is " << this->Energy_points << std::endl;
}

void	FragTrap::highFivesGuys() 
{
  std::cout << "FragTrap " << name << " is guarding the gate!" << std::endl;
}