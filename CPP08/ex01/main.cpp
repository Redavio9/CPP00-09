/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:21 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/28 12:21:34 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
  Span span(10000);
  // for (int i = 0; i < 10000; i++) 
  // {
  //     span.addNumber(i);
  // }
  span.addNumber(1);
  span.addNumber(2);
  span.addNumber(3);
  span.addNumber(4);
  span.addNumber(5);
  try 
  {
      std::cout << "Shortest span: " << span.shortestSpan() << '\n';
      std::cout << "Longest span: " << span.longestSpan() << '\n';
  } 
  catch (char *e) 
  {
      std::cerr << e << '\n';
  }
  return 0;
}