/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_float.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:02:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/20 13:04:23 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

void printf_float(std::string str)
{
	double num = 0;
   if(str.length() == 1 && std::isdigit(str[0]) == 0)
    {
      std::cout << std::fixed;
		  std::cout << "float : " << static_cast<double>(str[0]) << std::endl;
    }
	else
	{
      std::cout << std::fixed;
	    num = strtod(str.c_str(), NULL);
	    std::cout << "float : " << num << std::endl;
	}
}

void convert_to_float(std::string str)
{
	if(check_is_string(str) || check_point(str))
	{
		std::cout << "float : ERROR !!\n";
	}
	else
	    printf_float(str);
      
}