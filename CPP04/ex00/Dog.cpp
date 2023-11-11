/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:50:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 19:49:49 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
  std::cout << this->type << "Default Dog constructor\n";
}
Dog::Dog(std::string type)
{
  this->type = type;
}
Dog::Dog(const Dog &copy)
{
  this->type = copy.type;
}

Dog &Dog::operator=(const Dog &assign)
{
 if (this != &assign)
    this->type = assign.type;
  return(*this); 
}
Dog::~Dog()
{
   std::cout << this->type << "Dog Destructor\n";
}

void Dog::makeSound()
{
  std::cout << "I AM A DOG Woof! Woof!\n";
}