/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:21 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/24 10:22:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
  try 
  {
    Span span(10000);
    std::vector<int> vec;

	vec.push_back(0);
	vec.push_back(13);
	vec.push_back(14);
	// vec.push_back(19);
	// vec.push_back(11);
	// vec.push_back(4);
    
    span.addNumbers(vec.begin(), vec.end());
    std::cout << "Shortest span: " << span.shortestSpan() << '\n';
    std::cout << "Longest span: " << span.longestSpan() << '\n';
  } 
  catch (std::exception &e) 
  {
    std::cerr << e.what() << '\n';
  }
  return 0;
}
