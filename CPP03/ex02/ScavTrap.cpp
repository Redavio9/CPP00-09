/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:44:54 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/11 11:45:27 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap_Name : " << this->name << std::endl;
}

ScavTrap::ScavTrap( std::string _name): ClapTrap(_name) 
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap_Name : " << this->name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap "<< this->name << " has been destroyed." << std::endl;
}

void	ScavTrap::attack(std::string const & target) 
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of Attack_damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) 
{
		this->Hit_points -= amount;
		std::cout << "ScavTrap " << this->name << " take Attack_damage " << amount << " , remaning hp is " << this->Energy_points << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) 
{
		this->Hit_points += amount;
		std::cout << "ScavTrap " << this->name << " is repaired by " << amount << " and remaning hp is " << this->Energy_points << std::endl;
}

void	ScavTrap::guardGate() 
{
		std::cout << "ScavTrap " << this->name << " cannot enter gate guard mode because " << this->name << " is dead." << std::endl;
}