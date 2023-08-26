/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:54:25 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/26 15:29:27 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"megaphone.hpp"

void ft_uppercase(std::string myString)
{
	std::string currentChar;
	int i;

	i = 0;
	while (myString[i]) 
	{
		currentChar = toupper(myString[i]);
		std::cout << currentChar;
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while(av[i])
		{
			ft_uppercase(av[i]);
			i++;
			if(av[i])
				std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

