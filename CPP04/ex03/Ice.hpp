/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:19 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 13:10:56 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include<iostream>
#include"ICharacter.hpp"
#include"AMateria.hpp"


class Ice : public AMateria
{
  public:
    Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &assign);
    Ice* clone() const;
    void use(ICharacter& target);
    ~Ice();
};

#endif