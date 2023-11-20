/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:01:21 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/20 13:04:10 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte()
{
}
ScalarConverte::ScalarConverte(ScalarConverte &obj)
{
  *this = obj;
}
ScalarConverte ScalarConverte::operator=(ScalarConverte &obj)
{
  if(this != &obj)
  {
    
  }
  return(*this);
}

ScalarConverte::~ScalarConverte()
{
}

void ScalarConverte::Converte(std::string str)
{
  convert_to_char(str);
  convert_to_int(str);
  convert_to_double(str);
  convert_to_float(str);
}