/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:26 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/20 11:03:12 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : Max(N)
{
}

Span::~Span()
{
}

Span::Span(Span const &obj)
{
  *this = obj;
}

Span Span::operator=(Span const &obj)
{
  if(this != &obj)
  {
  }
  return(*this);
}

void Span::addNumber(int num) 
{
  if (myvector.size() >= Max)
      throw "Span is full. Cannot add more numbers.";
  myvector.push_back(num);
}


// Member function to find the shortest span
  int Span::shortestSpan() 
  {
    if (myvector.size() < 2) 
        throw "Not enough numbers to find a span.";
    std::sort(myvector.begin(), myvector.end());
    return myvector[1] - myvector[0];
  }

  // Member function to find the longest span
  int Span::longestSpan() 
  {
      if (myvector.size() < 2) 
          throw "Not enough numbers to find a span.";
      std::sort(myvector.begin(), myvector.end());    
      return myvector.back() - myvector.front();
  }

  void Span::addNumbers( std::vector<int>::iterator begin , std::vector<int>::iterator end)
  {
    for (; begin != end;)
    {
      if (myvector.size() >= Max)
        throw "Span is full. Cannot add more numbers.";
      myvector.push_back(*begin);
      begin++;
    }
  }
  