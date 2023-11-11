/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:49:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/09 13:45:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
	this->name = "default";
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
  this->name = copy.name;
  this->Hit_points = copy.Hit_points;
  this->Energy_points = copy.Energy_points;
  this->Attack_damage = copy.Attack_damage;
}
FragTrap::~FragTrap() 
{
	std::cout << "FragTrap "<< this->name << " has been destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	if(this != &assign)
	{
		this->name = assign.name;
		this->Hit_points = assign.Hit_points;
		this->Energy_points = assign.Energy_points;
		this->Attack_damage = assign.Attack_damage;	
	}
  return(*this);
}


void	FragTrap::highFivesGuys() 
{
  std::cout << "FragTrap " << name << " is guarding the gate!" << std::endl;
}