/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:50:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/15 09:36:25 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
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
  this->type = assign.type;
  return(*this);
}
Dog::~Dog()
{
}

void Dog::makeSound()
{
  std::cout << "I AM A DOG Woof! Woof!\n";
}