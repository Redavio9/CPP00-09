/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:21 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/20 12:31:59 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
  Span span(10000);
  std::vector<int> vec;
		vec.push_back(6);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(9);
		vec.push_back(11);
		vec.push_back(15);
  try 
  {
    span.addNumbers(vec.begin(), vec.end());  
    std::cout << "Shortest span: " << span.shortestSpan() << '\n';
    std::cout << "Longest span: " << span.longestSpan() << '\n';
  } 
  catch (char *e) 
  {
    std::cerr << e << '\n';
  }
  return 0;
}

// int main() 
// {
//     try 
//     {
//         Span mySpan;
//         mySpan.addNumber(5);
//         mySpan.addNumber(10);
//         mySpan.addNumber(3);
//         mySpan.addNumber(8);

//         int result = mySpan.longestSpan();

//         std::cout << "Longest span: " << result << std::endl;
//     } 
//     catch (const std::exception& e) 
//     {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }