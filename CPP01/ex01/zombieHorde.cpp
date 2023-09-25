/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:08:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:08:33 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
  Zombie *Hord = new Zombie[N];
  for (int i = 0; i < N; i++)
  {
    Hord[i].set_name(name);
    Hord[i].announce();
  }
  return(Hord);
}