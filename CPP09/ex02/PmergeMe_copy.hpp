/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_copy.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/18 11:55:37 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_COPY_HPP
# define PMERGEME_COPY_HPP

#include <iostream>
#include <deque>
#include <sstream>

typedef std::deque<std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> > pend;

class PermegeMe
{
  private:
    size_t                 size;
    std::string Input;
    std::deque<double> pair;
    std::deque<double> rest;
    std::deque<std::deque<double> >subdeques;
    std::deque<std::deque<double> >MainChain;
    std::deque<std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> >PandChain;
    std::deque<double>::iterator it;
  public:
    PermegeMe();
    PermegeMe(char *av);
    ~PermegeMe();
    PermegeMe (const PermegeMe &obj);
    PermegeMe operator=(const PermegeMe &obj);
    void parse();
    void dump();
    bool checkInput(std::string str);
    void AddDataToPair(std::string str);
    void PushBackData_Merge();
    void PushBackData_RevMerge();
    void merge();
    void checkSort();
    void RevMerge();
    void AddMainchainPand();
    void insert_pend_to_main();
    void update_iterator(std::deque<std::deque<double> >::iterator it);
    void print_dequeOfdeques(std::deque<std::deque<double> > vec, std::string str);
    void print_PandChain(std::deque<std::pair<std::deque<double>, std::deque<std::deque<double> >::iterator> >PandChain);
    void add_deque_Ofdeques_rest();
    // void AddDataTodeque();
};


#endif