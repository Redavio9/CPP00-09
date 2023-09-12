/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 10:06:10 by rarraji          ###   ########.fr       */
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

Animal::~Animal()
{
}

void Animal::makeSound()
{
  std::cout << "I AM ANIMAL Meow! Meow! Woof! Woof!\n";
}