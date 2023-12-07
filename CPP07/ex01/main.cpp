/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:53 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 09:47:31 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main()
{
// -------------------||Declaration||------------------------------------------------- //
	int int_array[] = {1, 2, 3, 4, 5};
	char char_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
// -------------------||INT_ARRAY||--------------------------------------------------- //
	std::cout << "int_array: \n";
	for (int i = 0; i < 5; i++)
		std::cout << int_array[i] << "\n";
	std::cout << std::endl;
	iter<int>(int_array, 5, increment<int>);
	std::cout << "After applying increment: \n";
	for (int i = 0; i < 5; i++)
		std::cout << int_array[i] << "\n";
// --------------------||CHAR_ARRAY||------------------------------------------------- //
	std::cout << std::endl << "char_array: \n";
	for (int i = 0; i < 7; i++)
		std::cout << char_array[i] << "\n";
	std::cout << std::endl;
	iter<char>(char_array, 7, increment<char>);
	std::cout << "After applying increment: \n";
	for (int i = 0; i < 7; i++)
		std::cout << char_array[i] << "\n";
	std::cout << std::endl;
}


// class Awesome
// {
//   private:
//     int _n;
//   public:
//     Awesome( void ) : _n( 42 ) 
//     { return; }
//     int get( void ) const 
//     { return this->_n; }
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T1>
// void print( T1& x )
// {
//   std::cout << x << std::std::endl;
//   return;
// }

// int main() 
// {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];
//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );
//   return 0;
// }

