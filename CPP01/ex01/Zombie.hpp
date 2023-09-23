/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:13:40 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/21 08:47:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string name;
  public:
    Zombie();
    Zombie(std::string name);
    ~Zombie(); 
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

# endif