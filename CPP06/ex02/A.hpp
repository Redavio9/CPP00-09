/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:36:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 10:30:39 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP


#include "iostream"
#include "Base.hpp"

class  A : public Base
{
  public:
    A();
    ~A();
    A(A &boj);
    A operator=(A &boj);
};

#endif
