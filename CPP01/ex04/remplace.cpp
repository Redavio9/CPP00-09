/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:30:23 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/01 15:50:51 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remplace.hpp"

void remplace_fn(char **av)
{
	std::ifstream inFile;	 // R
	std::ofstream outFile; // W
	std::string name;
	std::string line;
	int	i = 0;
	size_t foundpos;

	name = av[1];
	inFile.open(name, std::ios::in);
	outFile.open(name + "_replace", std::ios::out);
	if (!inFile.is_open() && !outFile.is_open())
	{
		std::cerr << "Error: Could not open the file." << std::endl;
		return;
	}
	while (std::getline(inFile, line))
	{
		foundpos = line.find(av[2]);
		while (foundpos != std::string::npos)
		{
			line.erase(foundpos);
			// i = 0;
			
			// outFile << line.substr(i, foundpos);
			// outFile << av[3];
			// i = foundpos;
			// // line = line + foundpos;
			// foundpos = line.find(av[2], foundpos);
			
		}
		
	}
	std::cout << "\n";
}