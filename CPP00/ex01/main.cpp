/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:04:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/20 22:34:40 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"


int main()
{
    Phonebook phone;
    std::string input;

    while(std::cin)
    {
        std::cout << "entrer the commande : ";
        getline(std::cin, input);
        if(input == "ADD")
           phone.add();
        else if(input == "SEARCH")
            phone.search();
        else if(input == "EXIT" || std::cin.eof())
            exit(0);
    }
}