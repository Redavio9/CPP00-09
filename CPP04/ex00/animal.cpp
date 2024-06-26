/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:38:47 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 10:16:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
  std::cout <<  "Default Animal constructor\n";
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
  std::cout << this->type << "Animal Destructor\n";
}

void Animal::makeSound()
{
  std::cout << "I AM Animal Meow! Meow! Woof! Woof!\n";
}

