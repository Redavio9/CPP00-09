/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:33:17 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 13:10:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include<iostream>
#include"ICharacter.hpp"
#include"AMateria.hpp"


class Cure : public AMateria
{
  public:
    Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &assign);
    Cure* clone() const;
    void use(ICharacter& target);
    ~Cure();
};

#endif