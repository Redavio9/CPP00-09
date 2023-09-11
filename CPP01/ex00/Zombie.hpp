/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:48:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/10 15:33:44 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
      std::string name;
    public : 
      Zombie();
      Zombie(std::string x);
      ~Zombie();
      void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif