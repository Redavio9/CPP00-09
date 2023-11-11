/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:14 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/17 16:15:44 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice() 
{
  // std::cout << this->type << "Default Ice constructor\n";
  type = "ice";
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
    return new Ice;
}

void Ice::use(ICharacter& target)
{
  std::cout << "* heals < " << target.getName() << "'s wounds " << std::endl;
}