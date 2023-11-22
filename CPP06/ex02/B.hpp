/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:36:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/22 09:39:00 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP


#include "iostream"
#include "Base.hpp"

class  B : public Base
{
  public:
    B();
    ~B();
    B(B &boj);
    B operator=(B &boj);
};


#endif