/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:48:40 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 19:49:43 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
  std::cout << this->type << "Default Cat constructor\n";
}
Cat::Cat(std::string type)
{
  this->type = type;
}
Cat::Cat(const Cat &copy)
{
  this->type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);
}

Cat::~Cat()
{
   std::cout << this->type << "Cat Destructor\n";
}

void Cat::makeSound()
{
  std::cout << "I AM A CAT Meow! Meow!\n";
}