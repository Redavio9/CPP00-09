/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:06:01 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:09:06 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
  std::cout << "Default constructor\n";
}

Zombie::Zombie(std::string x)
{
  this->name = x;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
  std::cout << "Destructor\n";
}

void Zombie::set_name(std::string name)
{
  this->name = name;
}
