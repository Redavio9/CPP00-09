/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/28 12:10:47 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>


class Span
{
  private:
    unsigned int Max;
    std::vector<int> myvector;
    
  public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(Span const &obj);
    Span operator=(Span const &obj);
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};


#endif