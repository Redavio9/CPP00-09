/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_copy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/18 19:22:10 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe_copy.hpp"

int cnt = 0;

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

void PermegeMe::print_dequeOfdeques(std::deque<std::deque<double> > vec, std::string str)
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
void PermegeMe::print_PandChain(std::deque<std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> > PandChain)
{
	for (size_t i = 0; i < PandChain.size(); ++i)
	{
		std::cout << "PandChain " << i + 1 << ": ";
		for (size_t j = 0; j < PandChain[i].first.size(); ++j)
		{
			std::cout << PandChain[i].first[j] << " ";
		}
		std::cout << std::endl;
	}
}

void PermegeMe::add_deque_Ofdeques_rest()
{
	subdeques.clear();
	for (size_t i = 0; i < pair.size(); i += size)
	{
		std::deque<double> subdeque;
		for (size_t j = i; j < i + size && j < pair.size(); j++)
		{
			subdeque.push_back(pair[j]);
		}
		subdeques.push_back(subdeque);
	}
	if (subdeques.back().size() != size)
	{
		rest = subdeques.back();
		subdeques.pop_back();
	}
	std::cout << "here\n";
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

void PermegeMe::PushBackData_Merge()
{
	pair.clear();
	for (size_t i = 0; i < subdeques.size(); ++i)
	{
		for (size_t j = 0; j < subdeques[i].size(); ++j)
		{
			pair.push_back(subdeques[i][j]);
		}
	}
}

void PermegeMe::PushBackData_RevMerge()
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
	std::cout << "size : "<< subdeques.size() << std::endl;
	for (size_t i = 0; i < subdeques.size() - 1; i += 2)
	{
		cnt++;
		if (subdeques[i].back() > subdeques[i + 1].back())
			std::swap(subdeques[i], subdeques[i + 1]);
	}
	// print SousVecteur
	std::cout << "///////////////////BEGINE-SORT////////////////////  : \n";
	for (size_t i = 0; i < subdeques.size(); ++i)
	{
		std::cout << "SousVecteur " << i + 1 << ": ";
		for (size_t j = 0; j < subdeques[i].size(); ++j)
		{
			std::cout << subdeques[i][j] << " ";
		}
		std::cout << std::endl;
	}
	PushBackData_Merge();
	std::cout << "////////////////////////END-SORT/////////////////////  : \n";
}

void PermegeMe::AddMainchainPand()
{
	std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> Solix;
	// if ()
	// {
	// 	// save rest
	// 		pop
	// }
	// PandChain.reserve(pair.size());
	// MainChain.resize(pair.size());
	MainChain.push_back(subdeques[0]);
	MainChain.push_back(subdeques[1]);
	for (size_t i = 2; i < subdeques.size();)
	{
		Solix.first = subdeques[i];
		Solix.second = MainChain.end();
		++i;
		if (i < subdeques.size())
			Solix.second = MainChain.insert(MainChain.end(), subdeques[i]);
		PandChain.push_back(Solix);
		++i;
	}
	// Solix
	// PandChain.push_back(rest.end());
	std::cout << "-----------------------------------------------------\n";
}

bool compare(std::deque<double> first, std::deque<double> second)
{
	cnt++;
	return (first.back() < second.back());
}

void PermegeMe::update_iterator(std::deque<std::deque<double> >::iterator it)
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
	std::deque<std::deque<double> >::iterator it;
	for (size_t i = 0; i < PandChain.size(); i++)
	{
		it = lower_bound(MainChain.begin(), MainChain.end(), PandChain[i].first, compare);
		MainChain.insert(it, PandChain[i].first);
		// update_iterator(it);
	}
}
void PermegeMe::RevMerge()
{
	std::cout << "-----------------------------REVERSE-----------------------------\n";
	add_deque_Ofdeques_rest();
	AddMainchainPand();
	print_dequeOfdeques(MainChain, "MainChain");
	print_PandChain(PandChain);
	insert_pend_to_main();
	PushBackData_RevMerge();
	// std::cout << "********************REST-REV***********************: \n";
	// for (size_t i = 0; i < rest.size(); i++)
	// {
	// 	std::cout << rest[i] << std::endl;
	// }
	// std::cout << "************************************************: \n";
}

void PermegeMe::merge()
{
	add_deque_Ofdeques_rest();
	std::cout << "elSize : " << subdeques.front().size() << std::endl;
	// print_dequeOfdeques(subdeques, "deque");
	checkSort();
	std::cout << "here2\n";
	std::cout << subdeques.size() << std::endl;
	if (subdeques.size() > 3)
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
	for (std::deque<double>::iterator it = pair.begin(); it != pair.end(); ++it)
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
	// MainChain.resize(3000);
	merge();
	std::cout << "cnt :  " << cnt << std::endl;
}
