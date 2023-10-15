/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:32:24 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
  this->brain = new Brain;
  std::cout << this->type << "Default Cat constructor\n";
}
Cat::Cat(std::string type)
{
  this->type = type;
}
Cat::Cat(const Cat &copy)
{
  this->brain = new Brain;
  this->type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
  if (this != &assign)
  {
    this->type = assign.type;
    this->brain = new Brain;
  }
  return(*this);
}

Cat::~Cat()
{
  delete brain;
  std::cout << this->type << "Cat Destructor\n";
}

void Cat::makeSound()
{
  std::cout << "I AM A CAT Meow! Meow!\n";
}