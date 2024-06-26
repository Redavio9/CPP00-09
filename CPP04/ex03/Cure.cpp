/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:12 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/17 16:15:32 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure()
{
  // std::cout << this->type << "Default Cure constructor\n";
  type = "cure";
}
Cure::Cure(const Cure &copy)
{
  this->type = copy.type;
}
Cure &Cure::operator=(const Cure &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);  
}

Cure::~Cure()
{
  // std::cout << this->type << "Destructor Cure\n";
}
Cure* Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter& target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}