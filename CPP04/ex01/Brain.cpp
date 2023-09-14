/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:09:11 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 12:55:57 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"


Brain::Brain()
{
  std::cout << "Default constructor";
}
// Brain::Brain(std::string type)
// {
//   this->type = type;
// }

Brain::~Brain()
{
  std::cout << " Destructor";
}
