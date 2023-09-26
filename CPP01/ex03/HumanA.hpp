/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:17 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 10:07:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"


class HumanA
{
  private:
    std::string name;
    Weapon      &weapon;
  public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
    
};


#endif