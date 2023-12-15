/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/15 11:57:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PermegeMe::PermegeMe()
{
	size = 1;
}
PermegeMe::PermegeMe(char *av)
{
	size = 1;
	this->Input = av;
}
PermegeMe::~PermegeMe()
{
}
PermegeMe::PermegeMe(const PermegeMe &obj)
{
	(void)obj;
	*this = obj;
}
PermegeMe PermegeMe::operator=(const PermegeMe &obj)
{
	(void)obj;
	return (*this);
}

// --------------------------------------------------------------------------------------------------------- //

void PermegeMe::print_vectorOfvectors(std::vector<std::vector<double> > vec, std::string str)

{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		std::cout << str << i + 1 << ": ";
		for (size_t j = 0; j < vec[i].size(); ++j)
		{
			std::cout << vec[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void PermegeMe::print_PandChain(std::vector<std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> > PandChain)
{
	for (size_t i = 0; i < PandChain.size(); ++i)
	{
		std::cout << "SousPandChain " << i + 1 << ": ";
		// std::cout << PandChain << " ";
		for (size_t j = 0; j < PandChain[i].first.size(); ++j)
		{
			std::cout << PandChain[i].first[j] << " ";
		}
		std::cout << std::endl;
	}
}

bool PermegeMe::checkInput(std::string str)
{
	double nb;
	nb = strtod(str.c_str(), NULL);
	if ((nb == 0 && str.length() != 1 && !isdigit(str[0])) || nb < 0 || (str.length() == 1 && !isdigit(str[0])))
		return (false);
	return (true);
}

void PermegeMe::AddDataToPair(std::string str)
{
	double nb;

	nb = strtod(str.c_str(), NULL);
	this->pair.push_back(nb);
}

void PermegeMe::PushBackData()
{
	pair.clear();
	for (size_t i = 0; i < subVectors.size(); ++i)
	{
		for (size_t j = 0; j < subVectors[i].size(); ++j)
		{
			// std::cout << "HERE ::   "<< subVectors[i][j] << std::endl;
			pair.push_back(subVectors[i][j]);
		}
	}
	pair.insert(pair.end(), rest.begin(), rest.end());
	rest.clear();
}

void PermegeMe::PushBackData1()
{
	pair.clear();
	for (size_t i = 0; i < MainChain.size(); ++i)
	{
		for (size_t j = 0; j < MainChain[i].size(); ++j)
		{
			pair.push_back(MainChain[i][j]);
		}
	}
	pair.insert(pair.end(), rest.begin(), rest.end());
	rest.clear();
	MainChain.clear();
	PandChain.clear();
}

void PermegeMe::checkSort()
{
	// size_t size = subVectors.size();
	// std::cout << "size block 0: " << subVectors[0].size() << std::endl;
	// std::cout << "size block end: " << subVectors[subVectors.size() - 1].size() << std::endl;

	// add rest and erase in the subvector
	// std::cout << "len my vector : " <<  subVectors[subVectors.size() - 1].size() << std::endl;

	/*{
		std::cout << "********************REST***********************: \n";
		size = subVectors.size() - 1;
		for (size_t i = 0; i < subVectors[subVectors.size() - 1].size(); i++)
		{
			rest.push_back(subVectors[subVectors.size() - 1][i]);
		}
		for (size_t i = 0; i < rest.size(); i++)
		{
				std::cout << rest[i] << std::endl;
		}
		subVectors.erase(subVectors.end() - 1);
		std::cout << "************************************************: \n";
	}*/

	// swap if you can
	for (size_t i = 0; i < subVectors.size() - 1; i += 2)
	{
		if (subVectors[i].back() > subVectors[i + 1].back())
			std::swap(subVectors[i], subVectors[i + 1]);
	}

	// print SousVecteur
	std::cout << "///////////////////BEGINE-SORT////////////////////  : \n";
	for (size_t i = 0; i < subVectors.size(); ++i)
	{
		std::cout << "SousVecteur " << i + 1 << ": ";
		for (size_t j = 0; j < subVectors[i].size(); ++j)
		{
			std::cout << subVectors[i][j] << " ";
		}
		std::cout << std::endl;
	}
	PushBackData();
	std::cout << "////////////////////////END-SORT/////////////////////  : \n";
}

void PermegeMe::AddMainchainPand()
{
	std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> Solix;
	// if ()
	// {
	// 	// save rest
	// 		pop
	// }
	// PandChain.reserve(pair.size());
	MainChain.reserve(pair.size());
	MainChain.push_back(subVectors[0]);
	MainChain.push_back(subVectors[1]);
	for (size_t i = 2; i < subVectors.size();)
	{
		Solix.first = subVectors[i];
		Solix.second = MainChain.end();
		++i;
		if (i < subVectors.size())
			Solix.second = MainChain.insert(MainChain.end(), subVectors[i]);
		PandChain.push_back(Solix);
		++i;
	}
	// Solix
	// PandChain.push_back(rest.end());
	std::cout << "-----------------------------------------------------\n";
}

bool compare(std::vector<double> first, std::vector<double> second)
{
	// cnt++;
	return (first.back() < second.back());
}

void PermegeMe::update_iterator(std::vector<std::vector<double> >::iterator it)
{
	pend::iterator cur = PandChain.begin();

	for (; cur != PandChain.end(); ++cur)
	{
		if (it <= cur->second)
			++cur->second;
	}
}

void PermegeMe::insert_pend_to_main()
{
	// std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> tmp;
	// std::vector<std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> > rest2;
	std::vector<std::vector<double> >::iterator it;
	for (size_t i = 0; i < PandChain.size(); i++)
	{
		it = lower_bound(MainChain.begin(), PandChain[i].second, PandChain[i].first, compare);
		MainChain.insert(it, PandChain[i].first);
		update_iterator(it);
	}
	// if (size == 1)
	// {
	// 	for (size_t i = 0; i < rest.size(); i++)
	// 	{
	// 		std::vector<double> tmp2;
	// 		tmp2.push_back(rest[i]);
	// 		tmp.first = tmp2;
	// 		tmp.second = MainChain.end();
	// 		rest2.push_back(tmp);
	// 		it = lower_bound(MainChain.begin(), MainChain.end(), rest2[i].first, compare);
	// 		MainChain.insert(it, rest2[i].first);
	// 	}
	// }
}
void PermegeMe::RevMerge()
{
	std::cout << "-----------------------------REVERSE-----------------------------\n";
	subVectors.clear();
	for (size_t i = 0; i < pair.size(); i += size)
	{
		std::vector<double> subVector;
		for (size_t j = i; j < i + size && j < pair.size(); ++j)
		{
			subVector.push_back(pair[j]);
		}
		subVectors.push_back(subVector);
	}
	if (subVectors.back().size() != size)
	{
		rest = subVectors.back();
		subVectors.pop_back();
	} 
	AddMainchainPand();
	print_vectorOfvectors(MainChain, "MainChain");
	print_PandChain(PandChain);
	insert_pend_to_main();
	PushBackData1();
	// it = rest[0].end();
	// std::cout << " ===== >> HI << ==== :   " << *it << std::endl;
	std::cout << "********************REST-REV***********************: \n";
	for (size_t i = 0; i < rest.size(); i++)
	{
		std::cout << rest[i] << std::endl;
	}
	std::cout << "************************************************: \n";
}

void PermegeMe::merge()
{
	std::cout << "--------------------ETAPE ( " << size << " )----------------  : \n";
	subVectors.clear();
	for (size_t i = 0; i < pair.size(); i += size)
	{
		std::vector<double> subVector;
		for (size_t j = i; j < i + size && j < pair.size(); j++)
		{
			subVector.push_back(pair[j]);
		}
		subVectors.push_back(subVector);
	}
	if (subVectors.back().size() != size)
	{
		rest = subVectors.back();
		subVectors.pop_back();
	}

	std::cout << "elSize : " << subVectors.front().size() << std::endl;

	// print_vectorOfvectors(subVectors);
	checkSort();
	std::cout << subVectors.size() << std::endl;
	if (subVectors.size() > 3)
	{
		size *= 2;
		std::cout << "recursion : " << size << std::endl;
		merge();
		size /= 2;
	}
	RevMerge();
	
	dump();
}

void PermegeMe::dump()
{
	std::cout << "res: [ ";
	for (std::vector<double>::iterator it = pair.begin(); it != pair.end(); ++it)
		std::cout << *it << " ";
	std::cout << "]\n" << std::flush;
}

void PermegeMe::parse()
{
	std::istringstream split(Input);
	std::string str;
	std::string str1;
	while (split)
	{
		split >> str;
		if (!split)
			break;
		if (checkInput(str) == false)
		{
			std::cout << "ERROR !!" << std::endl;
			return;
		}
		AddDataToPair(str);
	}
	std::cout << size << std::endl;
	merge();
}