/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:30:23 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/23 22:41:12 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remplace.hpp"

void remplace_fn(char **av)
{
	std::ifstream inFile;	 // R
	std::ofstream outFile; // W
	std::string name;
	std::string av3;
	std::string av2;
	std::string line;
	int i = 0;
	size_t foundpos;
	// size_t foundpos1 = -1;

	// std::cout << foundpos1;
	name = av[1];
	av3 = av[3];
	av2 = av[2];
	inFile.open(name, std::ios::in);
	outFile.open(name + ".replace", std::ios::out);
	if (!inFile.is_open() || !outFile.is_open() || av2.length() == 0)
	{
		std::cerr << "Error: Could not open the file." << std::endl;
		return;
	}
	// 
	// while string, getline + "\n" if (getline.eof != 0)
	// replace using npos, 
	// write in outFile, 
	// 
	while (std::getline(inFile, line))
	{
		foundpos = line.find(av[2]);
		std::cout << foundpos << "\n";
		while (foundpos != std::string::npos)
		{
			i = 0;
			outFile << line.substr(i, foundpos);
			outFile << av3;
			i = foundpos + av3.length();
			line = line.substr(i, line.length());
			foundpos = line.find(av[2], foundpos);
		}
		// if (foundpos == std::string::npos)
		// 	outFile << line.substr(i, line.length()) << std::endl;
	}
	std::cout << "\n";
}