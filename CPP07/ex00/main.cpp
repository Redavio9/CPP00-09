/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:40 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 15:17:38 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>


using std::cout; 
using std::endl;
using std::string;

int main()
{
	int a_int, b_int;
	double a_double, b_double;
	string a_string, b_string;

	cout << "swap() test:" << endl;
	a_int = 123;
	b_int = 789;
  
	cout << "a_int: " << a_int << "  ||||  " << " b_int: " << b_int << endl;
	swap(a_int, b_int);
	cout << "After swap():" << endl;
	cout << "a_int: " << a_int << "  ||||  " << " b_int: " << b_int << endl;

	cout << endl << "min() test:" << endl;
	a_double = 123.123;
	b_double = 789.789;
  
	cout << "a_double: " << a_double << " (" << &a_double << ") b_double: " << b_double;
	cout << " (" << &b_double << ") min(a_double, b_double): ";
	cout << min(a_double, b_double) << " (" << min(a_double, b_double) << ")" << endl;
  
	a_double = 123.123;
	b_double = 123.123;
  
	cout << "a_double: " << a_double << " (" << &a_double << ") b_double: " << b_double;
	cout << " (" << &b_double << ") min(a_double, b_double): ";
	cout << min(a_double, b_double) << " (" << min(a_double, b_double) << ")" << endl;
  
	a_double = 789.789;
	b_double = 123.123;
  
	cout << "a_double: " << a_double << " (" << &a_double << ") b_double: " << b_double;
	cout << " (" << &b_double << ") min(a_double, b_double): ";
	cout << min(a_double, b_double) << " (" << min(a_double, b_double) << ")" << endl;

	cout << endl << "Max() test:" << endl;
	a_string = "asd";
	b_string = "zxc";
  
	cout << "a_string: " << a_string << " (" << &a_string << ") b_string: " << b_string;
	cout << " (" << &b_string << ") Max(a_string, b_string): ";
	cout << Max(a_string, b_string) << " (" << Max(a_string, b_string) << ")" << endl;
	a_string = "asd";
	b_string = "asd";
	cout << "a_string: " << a_string << " (" << &a_string << ") b_string: " << b_string;
	cout << " (" << &b_string << ") Max(a_string, b_string): ";
	cout << Max(a_string, b_string) << " (" << Max(a_string, b_string) << ")" << endl;
	a_string = "zxc";
	b_string = "asd";
	cout << "a_string: " << a_string << " (" << &a_string << ") b_string: " << b_string;
	cout << " (" << &b_string << ") Max(a_string, b_string): ";
	cout << Max(a_string, b_string) << " (" << Max(a_string, b_string) << ")" << endl;

	return (0);
}

