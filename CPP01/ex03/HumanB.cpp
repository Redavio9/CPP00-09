/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:24 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/31 13:03:35 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include"Weapon.hpp"

  Humanb::Humanb(std::string name) : name(name)
  {
  }
  void Humanb::set_weapen(Weapon &weapon)
  {
    this->weapon = &weapon;
  }
  void Humanb::attack()
  {
    std::cout << this->name << "attacks with their" << this->weapon->get_type() << std::endl;
  }
  Humanb::~Humanb()
  {
  }
