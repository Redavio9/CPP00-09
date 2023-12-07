/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:40 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 10:15:52 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main()
{
	int A, B;
	double C, D;
	std::string Str1, Str2;
	
	// ------------------------------------------------------------------------------------- //
														std::cout << "swap() test:" << std::endl;
	// ------------------------------------------------------------------------------------- //
	
	A = 100;
	B = 200;
  
	std::cout << "A: " << A << "      " << " B: " << B << std::endl;
	swap(A, B);
	std::cout << "After swap :" << std::endl;
	std::cout << "A: " << A << "      " << " B: " << B << std::endl;
	// ------------------------------------------------------------------------------------- //
														std::cout << std::endl << "min() test:" << std::endl;
	// ------------------------------------------------------------------------------------- //
	C = 100.788;
	D = 200.547;
  
	std::cout << "C: " << C << "      " << " D: " << D << std::endl;
	std::cout << "min(C, D):     ";
	std::cout << min(C, D) << std::endl;
  
	// ------------------------------------------------------------------------------------- //
														std::cout << std::endl << "Max() test:" << std::endl;
	// ------------------------------------------------------------------------------------- //
	Str1 = "aaa";
	Str2 = "bbb";
  
	std::cout << "Str1: " << Str1 << "      " << " Str2: " << Str2 << std::endl;
	std::cout << "Max(Str1, Str2):      ";
	std::cout << Max(Str1, Str2) << std::endl;
	
	// ------------------------------------------------------------------------------------- //
	return (0);
}


