/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 11:21:42 by rarraji          ###   ########.fr       */
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
at::Cat(const Cat &copy)
{
  brain = new brain();
  this->type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
  brain = new brain();
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