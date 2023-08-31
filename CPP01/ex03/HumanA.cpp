/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:22 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/31 13:03:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"Weapon.hpp"

  Humana::Humana(std::string name, Weapon &weapon) : name(name), weapon(weapon)
  {
  }
  void Humana::set_weapen(Weapon &weapon)
  {
    this->weapon = weapon;
  }
  void Humana::attack()
  {
    std::cout << this->name << "attacks with their" << this->weapon.get_type() << std::endl;
  }
  Humana::~Humana()
  {
  }
