/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:44:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/30 19:06:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_HPP
# define VIOLENCE_HPP

#include<istream>
#include<string.h>

class Weapon
{
  private:
    std::string type;
  public:
    void setType(std::string x);
    std::string getType(void);
    
};

#endif