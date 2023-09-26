/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:24 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 10:10:00 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include"Weapon.hpp"

HumanB::HumanB(): name("Default"), weapon(NULL)
{
}
HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}
void HumanB::set_weapen(Weapon &weapon)
{
  this->weapon = &weapon;
}
void HumanB::attack()
{
  if (this->weapon)
    std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
  else
    std::cout << name << " does not have a weapon" << std::endl;
}
HumanB::~HumanB()
{
  std::cout << "Destructor\n";
}
