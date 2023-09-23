/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:44:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/21 08:58:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  private:
    std::string type;
  public:
    Weapon(std::string type);
    void	set_Type(std::string type);
    const std::string &get_type();
    ~Weapon();
};

#endif