/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:39:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/22 12:24:27 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base::Base()
{
}
Base::~Base()
{
}
Base::Base(Base &obj)
{
  *this = obj;
}
Base Base::operator=(Base &obj)
{
  if(this != &obj)
  {
    
  }
  return(*this);
}

Base * generate(void)
{
  int choice = std::rand() % 3 + 1;
  switch (choice) 
  {
      case 1:
          return new A();
      case 2:
          return new B();
      case 3:
          return new C();
      default:
          return new A();
  }
}
void identify(Base* p)
{
  if (dynamic_cast<A *>(p))
    std::cout << "THIS IS A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "THIS IS B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "THIS IS C" << std::endl;
  else
     std::cout << "ERROR !!" << std::endl; 
}
void identify(Base& p)
{
  try
  {
    if(dynamic_cast<A *>(&p))
    std::cout << "THIS IS A" << std::endl;
  }
  catch(...)
  {
  }
  try
  {
    if(dynamic_cast<B *>(&p))
    std::cout << "THIS IS B" << std::endl;
  }
  catch(...)
  {
  }
  try
  {
    if(dynamic_cast<C *>(&p))
    std::cout << "THIS IS C" << std::endl;
  }
  catch(...)
  {
  }
}