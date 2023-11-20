/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_int.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:21:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/20 13:02:10 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int check_max_min(std::string str)
{
  double num = strtod(str.c_str(), NULL);
  if(num > INT_MAX || num < INT_MIN)
    return(1);
  return(0);  
}

void printf_int(std::string str)
{
	double num = 0;
  if(str.length() == 1 && std::isdigit(str[0]) == 0)
		std::cout << "Int : " << static_cast<int>(str[0]) << std::endl;
	else
	{
	    num = strtod(str.c_str(), NULL);
	    std::cout << "Int : " << static_cast<int>(num) << std::endl;
	}
}

void convert_to_int(std::string str)
{
	if(check_is_string(str) || check_point(str) || check_max_min(str))
	{
		std::cout << "int : ERROR !!\n";
	}
	else
	    printf_int(str);
      
}