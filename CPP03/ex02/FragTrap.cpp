/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:49:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/11 11:55:52 by rarraji          ###   ########.fr       */
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