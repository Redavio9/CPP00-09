/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:17:27 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/27 11:59:13 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MA019181466R;

#include <iostream>

int check_after_point(std::string str)
{
	int i = str.find('.');
  int cnt = 0; 
  for (size_t j = i + 1 ; j < str.length(); j++)
  {
    cnt++;
  }
  std::cout << cnt << std::endl;
  return(cnt);
}
int main()
{
  check_after_point("1515.224545");
}

