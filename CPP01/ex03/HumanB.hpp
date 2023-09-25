/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:27 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:11:33 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class Humanb
{
  private:
    std::string name;
    Weapon *weapon;
  public:
    Humanb();
    Humanb(std::string name);
    void set_weapen(Weapon &Weapon);
    void attack();
    ~Humanb();
    
};


#endif

