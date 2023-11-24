/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_float.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:02:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/24 11:51:52 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

void printf_float(std::string str)
{
	double num = 0;
   if(str.length() == 1 && std::isdigit(str[0]) == 0)
    {
      std::cout << std::fixed;
		  std::cout << "float : " << static_cast<double>(str[0]) << "f" << std::endl;
    }
	else
	{
      std::cout << std::fixed;
	    num = strtod(str.c_str(), NULL);
	    std::cout << "float : " << num << "f" << std::endl;
	}
}

void convert_to_float(std::string str)
{
	if(check_is_string(str) || check_point(str))
	{
		std::cout << "float : IMPOSSIBLE !!\n";
	}
	else
	    printf_float(str);
      
}