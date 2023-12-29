/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_copy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:55 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/28 09:26:31 by rarraji          ###   ########.fr       */
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
	pair.insert(pair.end(), rest.begin(), rest.end());
	rest.clear();
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
	//sort(swap)
	for (size_t i = 0; i < subdeques.size() - 1; i += 2)
	{
		cnt++;
		if (subdeques[i].back() > subdeques[i + 1].back())
			std::swap(subdeques[i], subdeques[i + 1]);
	}
	// print SousVecteur
	for (size_t i = 0; i < subdeques.size(); ++i)
	{
		std::cout << "SousVecteur " << i + 1 << ": ";
		for (size_t j = 0; j < subdeques[i].size(); ++j)
		{
			std::cout << subdeques[i][j] << " ";
		}
		std::cout << std::endl;
	}
	//clear data and update paire
	PushBackData_Merge();
}

void PermegeMe::AddMainchainPand()
{
	std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> Solix;
	
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
}

bool compare(std::deque<double> first, std::deque<double> second)
{
	cnt++;
	return (first.back() <= second.back());
}




void PermegeMe::insert_pend_to_main()
{
	unsigned long jacob[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 
	349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 
	715827883, 1431655765, 2863311531, 5726623061, 11453246123, 22906492245, 45812984491, 91625968981, 183251937963};
	
	long befor = 1;
	int added = 1;
	std::deque<std::deque<double> >::iterator it;
	bool ok = false;
	for (size_t i = 0; i < 37; i++)
	{
		int current = jacob[i];
		if (PandChain.size() + 1 < (size_t)current)
		{
			current = PandChain.size() + 1;
			ok = true;
		}
		for (;current > befor;)
		{
			it = lower_bound(MainChain.begin(), MainChain.begin() + (current - 1) + added, PandChain[current - 2].first, compare);
			MainChain.insert(it, PandChain[current - 2].first);
			current--;
			added++;
		}
		if (ok)
			break ;
		befor = jacob[i];
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
}

void PermegeMe::merge()
{
	add_deque_Ofdeques_rest();
	checkSort();
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
	bool ok = false;
	std::deque<double>::iterator it = pair.begin();
	std::deque<double>::iterator second = pair.begin() + 1;
	for (; it != pair.end(); ++it)
	{
		if (second != pair.end() && *it > *second)
			ok = true;
		second++;
		std::cout << *it << " ";
	}
	std::cout << "]\n" << std::flush;
	if (ok)
		std::cout << "Not sorted!!!" << std::endl;
	else
		std::cout << "sorted!!!" << std::endl;
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
	std::cout << "cnt :  " << cnt << std::endl;
}