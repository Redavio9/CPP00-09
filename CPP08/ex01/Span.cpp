/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:26 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/24 10:22:30 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : Max(0)
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

Span& Span::operator=(Span const &obj)
{
  if(this != &obj)
  {
    this->Max = obj.Max;
    this->myvector = obj.myvector;
  }
  return(*this);
}


void Span::addNumber(int num)
{
  if (myvector.size() >= Max)
      throw std::runtime_error("Span is full. Cannot add more numbers.");
  myvector.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator begin , std::vector<int>::iterator end)
{
  if (begin == end)
  {
    throw std::runtime_error("Not enough numbers to find a span.");
  }
  for (; begin != end;)
  {
    if (myvector.size() >= Max)
      throw std::runtime_error("Span is full. Cannot add more numbers.");
    myvector.push_back(*begin);
    begin++;
  }
}

// Member function to find the shortest span
  int Span::shortestSpan() 
  {
    if (myvector.size() < 2) 
        throw std::runtime_error("Not enough numbers to find a span.");
    std::sort(myvector.begin(), myvector.end());
    size_t res = myvector[1] - myvector[0];
    for (size_t i = 1; i + 1 < myvector.size(); i++)
    {  
        if(myvector[i + 1] - myvector[i] < (int)res)
          res = myvector[i + 1] - myvector[i]; 
    }
      return(res);
  }

  // Member function to find the longest span
  int Span::longestSpan() 
  {
      if (myvector.size() < 2) 
        throw std::runtime_error("Not enough numbers to find a span.");
      std::sort(myvector.begin(), myvector.end());    
      return myvector.back() - myvector.front();
  }

  