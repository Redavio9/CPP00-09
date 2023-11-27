/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:35:16 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 10:30:47 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP


#include "iostream"

class  Base
{
  public:
    Base();
    virtual ~Base();
    Base(Base &boj);
    Base operator=(Base &boj);
};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif
