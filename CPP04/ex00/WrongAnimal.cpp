/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:17:36 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 10:16:12 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout <<  "Default WrongAnimal constructor\n";
}
WrongAnimal::WrongAnimal(std::string type)
{
  this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
  this->type = copy.type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);  
}

WrongAnimal::~WrongAnimal()
{
  std::cout << this->type << "WrongAnimal Destructor\n";
}

void WrongAnimal::makeSound()
{
  std::cout << "I AM WrongAnimal Meow! Meow! Woof! Woof!\n";
}