/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_double.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:36:19 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/30 11:35:35 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"


int check_after_point(std::string str)
{
	int check_point = 0;
	int cnt = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(str[i] == '.')
			check_point++;  
	}
	if (check_point == 0)
		return(1);
	int i = str.find('.');
  for (size_t j = i + 1 ; j < str.length(); j++)
  {
    cnt++;
  }
	if(cnt == 0)
		cnt = 1;
  return(cnt);
}



void printf_double(std::string str)
{
	double num = 0;
   if(str.length() == 1 && std::isdigit(str[0]) == 0)
    {
      std::cout << std::fixed;
		  std::cout << "Double : " << std::setprecision(check_after_point(str)) << static_cast<double>(str[0]) << std::endl;
    }
	else
	{
      std::cout << std::fixed;
	    num = strtod(str.c_str(), NULL);
	    std::cout << "Double : " << num <<  std::setprecision(check_after_point(str)) << std::endl;
	}
}

void convert_to_double(std::string str)
{
	if(check_is_string(str) || check_point(str))
	{
		std::cout << "Double : IMPOSSIBLE !!\n";
	}
	else
	  printf_double(str);
}
