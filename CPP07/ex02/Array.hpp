/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:17:02 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/02 10:29:06 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>

template <typename T>
class Array
{
	private:
		T** _array;
		unsigned int _lenght;
		void killEmAll()
		{
			for (unsigned int i = 0; i < _lenght; i++)
				delete _array[i];
			delete[] _array;
			_array = 0;
			_lenght = 0;
		}
		
	public:
		class IndexOutOfBounds: public std::exception
		{
			public:
				const char*
				what() const throw()
				{
					return ("Index out of bounds");
				}
		};

		Array<T>()
		{
			_array = 0;
			_lenght = 0;
		}

		Array<T>(unsigned int n)
		{
			_array = new T*[n];
			_lenght = n;
			for (unsigned int i = 0; i < n; i++)
				_array[i] = new T();
		}

		Array<T>(const Array<T>& array)
		{
			_array = 0;
			_lenght = 0;
			*this = array;
		}

		~Array<T>()
		{
			killEmAll();
		}

		Array<T>&operator=(const Array<T>& array)
		{
			killEmAll();
			_array = new T*[array._lenght];
			_lenght = array._lenght;
			for (unsigned int i = 0; i < _lenght; i++)
				_array[i] = new T(*array._array[i]);

			return (*this);
		}

		T& operator[](size_t i)
		{
			if (i >= _lenght)
				throw IndexOutOfBounds();
			return (*_array[i]);
		}

		size_t size() const
		{
			return (_lenght);
		}

};

#endif
