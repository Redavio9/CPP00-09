/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:30:23 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 21:37:13 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remplace.hpp"

std::string remplir_string(std::ifstream& inFile)
{
    std::string tmp;
    std::string line;

    while (std::getline(inFile, line))
        tmp += line + '\n';

    return tmp;
}


std::string remplace_line(std::string tmp, const std::string& av2, const std::string& av3)
{
    size_t index = 0;
    while ((index = tmp.find(av2, index)) != std::string::npos)
    {
        tmp.erase(index, av2.length());
        tmp.insert(index, av3);
        index += av3.length();
    }
    return tmp;
}
void remplace_fn(char **av)
{
	std::ifstream inFile;	 // R
	std::ofstream outFile; // W
	std::string name;
	std::string tmp;
	std::string av3;
	std::string av2;

	name = av[1];
	av2 = av[2];
	av3 = av[3];
	
	inFile.open(name);
	outFile.open(name + ".replace");
	if (inFile.fail() || outFile.fail() || av2.empty())
	{
		std::cerr << "Error: Could not open the file." << std::endl;
		return;
	}
	tmp = remplir_string(inFile);
	tmp = remplace_line(tmp, av2, av3);
	outFile << tmp;
}

