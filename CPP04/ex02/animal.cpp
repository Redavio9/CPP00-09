/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:47 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/14 13:18:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
  std::cout << this->type << "Default Animal constructor\n";
}
Animal::Animal(std::string type)
{
  this->type = type;
}
Animal::Animal(const Animal &copy)
{
  this->type = copy.type;
}
Animal &Animal::operator=(const Animal &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);  
}

Animal::~Animal()
{
  std::cout << this->type << "Destructor Animal\n";
}
