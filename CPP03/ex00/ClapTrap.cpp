/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:45:35 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/06 11:59:14 by rarraji          ###   ########.fr       */
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
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "ClapTrap_Name : " << this->name << std::endl;
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
	std::cout << "ClapTrap "<< this->name << "Copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	if(this != &assign)
	{
		this->name = assign.name;
		this->Hit_points = assign.Hit_points;
		this->Energy_points = assign.Energy_points;
		this->Attack_damage = assign.Attack_damage;
		std::cout << "ClapTrap "<< this->name << " operator= is called" << std::endl;
	}
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points == 0 || Energy_points == 0)
		 std::cout << "ClapTrap " << this->name << " No attacks " << std::endl;
	else
	{  
		this->Energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
	}   
}

void ClapTrap::takeDamage(unsigned int amount)
{
		this->Hit_points -= amount;
		std::cout << "ClapTrap " << this->name << " take Damage " << amount << " , remaning hp is " << this->Energy_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points == 0 || Energy_points == 0)
		 std::cout << "ClapTrap " << this->name << " No Repaired " << std::endl;
	else
	{
		this->Energy_points--;
		this->Hit_points += amount;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " and remaning hp is " << this->Energy_points << std::endl;
	}
}



