/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:01:24 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 10:30:16 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP


#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>


class ScalarConverte
{
  ScalarConverte();
  ScalarConverte(ScalarConverte &obj);
  ScalarConverte operator=(ScalarConverte &obj);
  public:
    ~ScalarConverte();
    static void Converte(std::string str);
};

int check_point(std::string str);
int check_is_string(std::string str);

// int check_max_min(std::string str);
// void printf_int(std::string str);


void convert_to_int(std::string str);
void convert_to_double(std::string str);
void convert_to_float(std::string str);
void convert_to_char(std::string str);


#endif
