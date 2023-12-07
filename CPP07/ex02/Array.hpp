/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:17:02 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 10:06:42 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T* array;
		unsigned int lenght;

	public:
		Array<T>()
		{
			array = 0;
			lenght = 0;
		}

		Array<T>(unsigned int n)
		{
			array = new T[n];
			lenght = n;
			for (unsigned int i = 0; i < n; i++)
				array[i] = T();
		}

		Array<T>(const Array<T>& copy)
		{
			array = 0;
			lenght = 0;
			*this = copy;
		}

		Array<T>& operator=(const Array<T>& other)
		{
			delete[] array;
			lenght = other.lenght;
    	array = new T[lenght];
			for (unsigned int i = 0; i < lenght; i++)
				array[i] = other.array[i];
			return (*this);
		}
		~Array<T>()
		{
			std::cout << "destract !!\n";
			delete[] array;
			array = 0;
			lenght = 0;
		}


		T& operator[](unsigned int i)
		{
			if (i >= lenght)
				throw IndexOutOfBounds();
			return (array[i]);
		}

		unsigned int size() const
		{
			return (lenght);
		}
		
		class IndexOutOfBounds: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Index out of bounds");
				}
		};

};

#endif