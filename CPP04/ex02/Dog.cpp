/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:32:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
  this->brain = new Brain;
  std::cout << this->type << "Default Dog constructor\n";
}
Dog::Dog(std::string type)
{
  this->type = type;
}
Dog::Dog(const Dog &copy)
{
  this->brain = new Brain;
  this->type = copy.type;
}

Dog &Dog::operator=(const Dog &assign)
{
 if (this != &assign)
 {
    this->brain = new Brain;
    this->type = assign.type;
 }
  return(*this); 
}
Dog::~Dog()
{
  delete brain;
  std::cout << this->type << "Dog Destructor\n";
}

void Dog::makeSound()
{
  std::cout << "I AM A DOG Woof! Woof!\n";
}