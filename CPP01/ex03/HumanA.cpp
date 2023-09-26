/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:22 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 10:08:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"Weapon.hpp"

  HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
  {
  }

  void HumanA::attack()
  {
    std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
  }
  
  HumanA::~HumanA()
  {
    std::cout << "Destructor\n";
  }
