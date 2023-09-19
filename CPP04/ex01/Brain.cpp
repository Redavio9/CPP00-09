/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:09:11 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/15 09:38:18 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

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
