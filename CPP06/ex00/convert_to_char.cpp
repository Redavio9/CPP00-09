/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_char.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:44:53 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 11:12:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int check_point(std::string str)
{
	int check_point = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(str[i] == '.')
			check_point++;  
	}
	if (check_point > 1)
		return(1);
	// std::cout << "Double" << std::endl;	
	return(0);  
}
int check_is_string(std::string str)
{
// 	if(!str)
// 		return(1);
	for (size_t i = 0; i < str.length(); i++)
	{
		if(str[0] == '-' && str[0] == '+')
			continue;
		if (str[i] == '.' && str[i + 1] == 'f')
			continue;
		if(std::isdigit(str[i]) == 0 && (std::isdigit(str[i + 1]) == 0 && str[i + 1] != '\0') && str.length() > 1)
		{
			// printf("here1");
			return(1);  
		}
		if (std::isdigit(str[i]) == 0 && (std::isdigit(str[i + 1]) == 0 && str[i + 1] != '\0'))
		{
			printf("here2");
			return(1);
		}
		// if(strtod(str.c_str(), NULL) > 126 || strtod(str.c_str(), NULL) <= 32)
		// {
		// 	printf("here10");
		// 	return(1);
		// }
	}
	return(0);
}
int check_digit(std::string str)
{
	int res = strtod(str.c_str(), NULL);
	if (res < 32 || res > 126)
		return(0);
	return (1);	
}
int check_rang(std::string str, int *check)
{
	double num;
	int i = 0;
	
	num = strtod(str.c_str(), NULL);
	if(num < 0)
		return(1);
	if (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '+')
			*check = 1;
		i++;
	}
	if (std::isdigit(str[i]) && str[i + 1] == '\0' && check_digit(str))
		return (0);
	else if (std::isdigit(str[i]) && std::isdigit(str[i + 1]) && check_digit(str))
		return (0);
	// else if (static_cast<int>(str[0]) <= 32 || static_cast<int>(str[0]) > 126)
	// {
	// 	// printf("here7");
	// 	return(1);
	// }
	else if ((num < 32 || num > 126) && (std::isdigit(str[0]) || *check == 1))
		return(1);
	return (0);	
}
void printf_char(std::string str, int *check)
{
	double num;
	if (std::isdigit(str[0]) == 1 && std::isdigit(str[1]) == 1)
	{
		num = strtod(str.c_str(), NULL);
		std::cout << "char : " << static_cast<char>(num) << std::endl;
	}
	else
	{
		if (*check == 1 && str[2] == '\0')
			std::cout << "Char : " << static_cast<char>(str[1]) << std::endl;
		else if (*check == 1 && str[2] != '\0')	
			std::cout << "Char : " << static_cast<char>(strtod(str.c_str(), NULL)) << std::endl;
		else	
			std::cout << "Char : " << str << std::endl;
	}
}

void convert_to_char(std::string str)
{
	int check = 0;
	if(check_is_string(str) || check_point(str) || check_rang(str, &check))
	{
		std::cout << "char : ERROR !!\n";
	}
	else
	  printf_char(str, &check);
}

// int check_digit(std::string str)
// {
// 	int res = static_cast<int>(str[1]) + static_cast<int>(str[2]);
// 	if (res <= 32 || res > 126)
// 		return(0);
// 	return (1);	
// }

// int check_rang(std::string str)
// {
// 	double num;
// 	int i = 0;
// 	// num = strtod(str.c_str(), NULL);
// 	if (str[i] == '+' || str[i] == '-')
// 		i++;
// 	if (std::isdigit(str[i]) && str[i + 1] == '\0')
// 		return (0);
// 	else if (std::isdigit(str[i]) && std::isdigit(str[i + 1]) && str[i + 2] == '\0' && check_digit(str))
// 		return(0);	
// 	else if (static_cast<int>(str[0]) <= 32 || static_cast<int>(str[0]) > 126)
// 		return(1);
// 	// else if (num <= 32 || num > 126)
// 	// {
// 	// 	printf("reda\n");
// 	// 	return (1);
// 	// }
// 	return (0);	
// }