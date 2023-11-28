/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:42:30 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/28 09:49:40 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class X : public  Base
{
  
};

int main()
{
  Base n;
  
  X s;
  // Base *a = new x();
  
  // a = generate();
  identify(&s);
}
