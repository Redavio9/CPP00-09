/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:38:47 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 11:13:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"animal.hpp"

Animal::Animal()
{
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
  this->type = assign.type;
}

Animal::~Animal()
{
}

void Animal::makeSound()
{
  std::cout << "I AM ANIMAL Meow! Meow! Woof! Woof!\n";
}

