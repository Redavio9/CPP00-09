/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:07:17 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/31 13:02:27 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"


class Humana
{
  private:
    std::string name;
    Weapon &weapon;
  public:
    Humana(std::string name, Weapon &weapon);
    void set_weapen(Weapon &weapon);
    void attack();
    ~Humana();
    
};


#endif