/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:48:40 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 09:49:59 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
}
Cat::Cat(std::string type)
{
  this->type = type;
}

Cat::~Cat()
{
}

void Cat::makeSound()
{
  std::cout << "I AM A CAT Meow! Meow!\n";
}