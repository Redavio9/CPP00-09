/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:29:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/28 11:49:57 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>


template <typename T>
typename T::value_type easyFind(T &vec , int value) 
{
   for (typename T::iterator it = std::find(vec.begin(), vec.end(), value); it != vec.end(); it++) 
   {
       if (*it == value) 
           return *it;
   }
   throw "La valeur n'a pas été trouvée dans le conteneur";
}

# endif