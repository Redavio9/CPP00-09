/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:18:25 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/22 10:46:25 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP


#include "iostream"


struct Data
{
  uintptr_t i;
};



class  Serializer
{
  public:
    Serializer();
    ~Serializer();
    Serializer(Serializer &boj);
    Serializer operator=(Serializer &boj);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};


#endif