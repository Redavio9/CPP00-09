/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:14 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 11:19:30 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice() : AMateria(type)
{
  // std::cout << this->type << "Default Ice constructor\n";
  type = "Ice";
}
Ice::Ice(const Ice &copy)
{
  this->type = copy.type;
}
Ice &Ice::operator=(const Ice &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);  
}

Ice::~Ice()
{
  // std::cout << this->type << "Destructor Ice\n";
}
Ice* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
  std::cout << "* heals < " << target.getName() << "s wounds " << std::endl;
}