/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:09:11 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/14 13:19:03 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"


Brain::Brain()
{
  // for(int i = 0; i < 100 ; i++)
  // {
  //   this->ideas[i] = 0;
  // }
  std::cout << "Default Brain constructor\n";
}
Brain::Brain(const Brain &copy)
{
  for(int i = 0; i < 100 ; i++)
  {
    this->ideas[i] = copy.ideas[i];
  }
}
Brain Brain::operator=(const Brain &assign)
{
  for(int i = 0; i < 100 ; i++)
  {
    this->ideas[i] = assign.ideas[i];
  }
  return(*this);
}

Brain::~Brain()
{
  std::cout << "Brain Destructor\n";
}
