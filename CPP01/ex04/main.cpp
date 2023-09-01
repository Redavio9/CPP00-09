/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:26:09 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/01 12:00:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"remplace.hpp"

int main(int ac, char **av)
{
  if(ac != 4)
  {
        std::cerr << "Usage: program_name input_file" << std::endl;
        return 0; 
  }
  remplace_fn(av);
  return(0);
}