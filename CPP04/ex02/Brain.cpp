/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:54 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 13:23:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"


Brain::Brain()
{
  std::cout << "Default constructor";
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
}

Brain::~Brain()
{
  std::cout << " Destructor";
}