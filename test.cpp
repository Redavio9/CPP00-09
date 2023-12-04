/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:17:27 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/04 14:25:10 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MA019181466R;

// #include <iostream>

// int check_after_point(std::string str)
// {
// 	int i = str.find('.');
//   int cnt = 0; 
//   for (size_t j = i + 1 ; j < str.length(); j++)
//   {
//     cnt++;
//   }
//   std::cout << cnt << std::endl;
//   return(cnt);
// }
// int main()
// {
//   check_after_point("1515.224545");
// }

// / istringstream constructors.
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include <string>       // std::string
#include <fstream>

int main () 
{

  std::string stringvalues = "125,320,512,750,333";
  // std::istringstream strm (stringvalues);
  std::ifstream   strm;

  // strm.exceptions(std::ios::failbit | std::ios::badbit);

  strm.open("file.txt");

  

  std::string val;

  while (strm)
  {
    strm >> val;
    std::cout << val << std::endl;
  }
  return 0;
}