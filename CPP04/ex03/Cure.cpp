/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:12 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 11:19:26 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure() : AMateria(type)
{
  // std::cout << this->type << "Default Cure constructor\n";
  type = "Cure";
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
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}