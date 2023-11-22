/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:01:24 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/21 11:50:32 by rarraji          ###   ########.fr       */
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
  public:
    ScalarConverte();
    ScalarConverte(ScalarConverte &obj);
    ScalarConverte operator=(ScalarConverte &obj);
    ~ScalarConverte();
    static void Converte(std::string str);
};

int check_point(std::string str);
int check_is_string(std::string str);

void convert_to_char(std::string str);
void convert_to_int(std::string str);
void convert_to_double(std::string str);
void convert_to_float(std::string str);


#endif