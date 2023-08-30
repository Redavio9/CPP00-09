/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:08:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/30 14:32:43 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
  Zombie *Hord = new Zombie[N];
  for (int i = 0; i < N; i++)
  {
    Hord[i] = Zombie(name);
  }
  return(Hord);
}