/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 12:58:53 by rarraji          ###   ########.fr       */
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