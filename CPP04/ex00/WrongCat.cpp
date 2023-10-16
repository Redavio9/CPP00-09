/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:17:32 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 10:19:12 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
  // std::cout << this->type << "Default WrongCat constructor\n";
}
WrongCat::WrongCat(std::string type)
{
  this->type = type;
}
WrongCat::WrongCat(const WrongCat &copy)
{
  this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);
}

WrongCat::~WrongCat()
{
   std::cout << this->type << "WrongCat Destructor\n";
}

void WrongCat::makeSound()
{
  std::cout << "I AM A CAT Meow! Meow!\n";
}