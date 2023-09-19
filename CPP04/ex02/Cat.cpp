/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/15 09:35:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
}
Cat::Cat(std::string type)
{
  brain = new(Brain);
  this->type = type;
}
Cat::Cat(const Cat &copy)
{
  brain = new Brain();
  this->type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
  brain = new Brain();
  this->type = assign.type;
  return(*this);
}
Cat::~Cat()
{
  delete brain;
}

void Cat::makeSound()
{
  std::cout << "I AM A CAT Meow! Meow!\n";
}