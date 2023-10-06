/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:44:54 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/06 12:02:38 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	this->name = "default";
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

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap "<< this->name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
		this->name = copy.name;
		this->Hit_points = copy.Hit_points;
		this->Energy_points = copy.Energy_points;
		this->Attack_damage = copy.Attack_damage;
		std::cout << "ScavTrap "<< this->name << "Copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
  this->name = assign.name;
  this->Hit_points = assign.Hit_points;
  this->Energy_points = assign.Energy_points;
  this->Attack_damage = assign.Attack_damage;
	std::cout << "ScavTrap "<< this->name << " operator= is called" << std::endl;
  return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (Hit_points == 0 || Energy_points == 0)
		 std::cout << "ScavTrap " << this->name << " No attacks " << std::endl;
	else
	{  
		this->Energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
	}   
}

void ScavTrap::takeDamage(unsigned int amount)
{
		this->Hit_points -= amount;
		std::cout << "ScavTrap " << this->name << " take Damage " << amount << " , remaning hp is " << this->Energy_points << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (Hit_points == 0 || Energy_points == 0)
		 std::cout << "ScavTrap " << this->name << " No Repaired " << std::endl;
	else
	{
		this->Energy_points--;
		this->Hit_points += amount;
		std::cout << "ScavTrap " << this->name << " is repaired by " << amount << " and remaning hp is " << this->Energy_points << std::endl;
	}
}

void	ScavTrap::guardGate() 
{
		std::cout << "ScavTrap " << this->name << " cannot enter gate guard mode because " << this->name << " is dead." << std::endl;
}