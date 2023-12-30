/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:47:49 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/30 10:47:36 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <exception>
#include <stack>
#include <sstream>

class Rpn
{
  // static const double ADD = 0.1;
  // static const double SUB = 0.2;
  // static const double MUL = 0.3;
  // static const double DIV = 0.4;
  // static const double ERR = 0.5;
  
  private:
    std::string stringArgv;
    std::stack<double> rpn;
  public:
  
    Rpn();
    Rpn(char *av);
    Rpn(const Rpn& obj);
    Rpn &operator=(const Rpn &obj);
    ~Rpn();
    
    void splitNum();
    // void validateInput(std::string s);
    int isOperator(const char *op);
    // bool  isOperator(const std::string& str);
    // void  fromArgsToStack(const std::string& args);
    int calculate(std::string s);
    // void  dump();
    double size();
};

#endif