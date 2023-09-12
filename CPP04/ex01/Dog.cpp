/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:05:00 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 10:06:50 by rarraji          ###   ########.fr       */
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

Dog::~Dog()
{
}

void Dog::makeSound()
{
  std::cout << "I AM A DOG Woof! Woof!\n";
}