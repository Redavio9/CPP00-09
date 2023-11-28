/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:36:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/28 09:37:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP


#include <iostream>
#include "Base.hpp"

class  C : public Base
{
  public:
    C();
    ~C();
    C(C &boj);
    C operator=(C &boj);
};


#endif
