/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:27 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 10:08:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class HumanB
{
  private:
    std::string name;
    Weapon      *weapon;
  public:
    HumanB();
    HumanB(std::string name);
    void set_weapen(Weapon &Weapon);
    void attack();
    ~HumanB();
    
};


#endif

