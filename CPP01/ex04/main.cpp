/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:26:09 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 20:49:24 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"remplace.hpp"

int main(int ac, char **av)
{
  if(ac != 4)
  {
        std::cerr << "Usage: program_name input_file word_to_replace word_to_replace_with" << std::endl;
        return 0; 
  }
  remplace_fn(av);
  return(0);
}