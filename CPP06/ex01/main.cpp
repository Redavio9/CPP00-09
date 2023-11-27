/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:20:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 10:30:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main()
// {
//   Data *ptr;
//   uintptr_t y;
//   ptr->i = 123;

//   y = Serializer::serialize(ptr);
  
//   ptr = Serializer::deserialize(y);
//   std::cout << ptr->i <<std::endl;
// }

int main()
{
  Data *ptr = new Data;
  uintptr_t y;

  ptr->i = 123;

  y = Serializer::serialize(ptr);
  ptr = Serializer::deserialize(y);
  
  std::cout << ptr->i << std::endl;
  
  delete ptr;
  return 0;
}
