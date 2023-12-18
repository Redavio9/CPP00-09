/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/18 13:07:13 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <list>

typedef std::vector<std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> > pend;

class PermegeMe
{
  private:
    size_t                 size;
    std::string Input;
    std::list<double> list_pair;
    std::list<double> list_rest;
    std::list<std::list<double> >SubList;
    std::vector<double> pair;
    std::vector<double> rest;
    std::vector<std::vector<double> >subVectors;
    std::vector<std::vector<double> >MainChain;
    std::list<std::list<double> >list_MainChain;
    std::vector<std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> >PandChain;
    std::list<std::pair<std::list<double>, std::list<std::list<double> >::iterator> >list_PandChain;
    std::vector<double>::iterator it;
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
    void update_iterator(std::vector<std::vector<double> >::iterator it);
    void update_iterator(std::list<std::list<double> >::iterator it);
    void print_vectorOfvectors(std::vector<std::vector<double> > vec, std::string str);
    void print_PandChain(std::vector<std::pair<std::vector<double>, std::vector<std::vector<double> >::iterator> >PandChain);
    void add_Vector_OfVectors_rest();
    // void AddDataToVector();
};


#endif