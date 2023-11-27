/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:53 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 10:31:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cstring>
#include <cctype>

using std::cout; using std::endl;

/*
 * Generic function to increment the passed variable by one.
 */
template <typename T>
static void
plusOne(T& something)
{
	something++;
}

/*
 * Converts the passed char to uppercase.
 */
static void
toUpper(char& c)
{
	c = toupper(c);
}

int
main()
{
	int int_array[] = {1, 2, 3, 4, 5};
	char char_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	char string[] = "voy a pgepagag uma sena de picoteu, os apuntais?";

	cout << "Original int_array: {";
	for (int i = 0; i < 5; i++)
		cout << " " << int_array[i];
	cout << " }" << endl;
	iter<int>(int_array, 5, plusOne<int>);
	cout << "After applying plusOne() with iter(): {";
	for (int i = 0; i < 5; i++)
		cout << " " << int_array[i];
	cout << " }" << endl;

	cout << endl << "Original char_array: {";
	for (int i = 0; i < 7; i++)
		cout << " " << char_array[i];
	cout << " }" << endl;
	iter<char>(char_array, 7, plusOne<char>);
	cout << "After applying plusOne<char>() with iter(): {";
	for (int i = 0; i < 7; i++)
		cout << " " << char_array[i];
	cout << " }" << endl;

	cout << endl << "Original string: " << string << endl;
	iter<char>(string, strlen(string), toUpper);
	cout << "After applying toUpper() with iter(): " << string << endl;

	return (0);
}

