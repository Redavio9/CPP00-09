/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:43:18 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/02 10:23:07 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"
#include"PhoneBook.hpp"







int main()
{
    Contact book[8];
    Phonebook phone;
    std::string input;
    std::string y;
    int index = 0;
    int cnt = 0;
    int input2;
    
    while(1)
    {
        std::cout << "entrer une commande : ";
        std::cin >> input;
        if(input == "ADD")
        {
            std::cout << "------->First Name : ";
            std::cin >> y;
            book[index].ft_set_name(y);
            std::cout << "------->Last Name : ";
            std::cin >> y;
            book[index].ft_set_lastname(y);
            std::cout << "------->Nickname : ";
            std::cin >> y;
            book[index].ft_set_phonenumber(y);
            std::cout << "------->phone number : ";
            std::cin >> y;
            book[index].ft_set_nickname(y);
            std::cout << "------->Darkestsecret : ";
            std::cin >> y;
            book[index].ft_set_darkestsecret(y);
            std::cout << std::endl;
            index++;
        }
        else if(input == "SEARCH")
        {
            std::cout << "____________________________________________" << std::endl;
            std::cout << "|";
            std::cout << std::setw(10) << "INDEX";
            std::cout << "|";
            std::cout << std::setw(10) << "FIRSTNAME";
            std::cout << "|";
            std::cout << std::setw(10) << "LASTNAME";
            std::cout << "|";
            std::cout << std::setw(10) << "NICKNAME";
            std::cout << "|";
            std::cout << std::endl;
            while (index)
            {
                std::cout << "____________________________________________" << std::endl;
                std::cout << "|";
                std::cout << std::setw(10) << cnt;
                if (book[cnt].ft_get_firstname().length() > 10)
                    std::cout << "|" << std::setw(9) << book[cnt].ft_get_firstname().substr(0, 9) << ".";
                else
                    std::cout << "|" << std::setw(10) << book[cnt].ft_get_firstname();   
                if (book[cnt].ft_get_lastname().length() > 10)
                    std::cout << "|" << std::setw(9) << book[cnt].ft_get_lastname().substr(0, 9) << ".";
                else
                    std::cout << "|" << std::setw(10) << book[cnt].ft_get_firstname();   
                if (book[cnt].ft_get_nickname().length() > 10)
                    std::cout << "|" << std::setw(9) << book[cnt].ft_get_nickname().substr(0, 9) << ".";
                else
                    std::cout << "|" << std::setw(10) << book[cnt].ft_get_nickname();
                std::cout << "|";
                std::cout << std::endl;
                cnt++;
                index--;  
            }
            std::cout << "____________________________________________" << std::endl;
            std::cout << "entrer index contact : ";
            std::cin >> input2;
            std::cout << "------->First Name : ";
            std::cout << book[input2].ft_get_firstname() << std::endl;
            std::cout << "------->Last Name : ";
            std::cout << book[input2].ft_get_lastname() << std::endl;;
            std::cout << "------->Nickname : ";
            std::cout << book[input2].ft_get_nickname() << std::endl;;
            book[index].ft_set_phonenumber(y);
            std::cout << "------->phone number : ";
            std::cout << book[input2].ft_get_phonenumber() << std::endl;;
            std::cout << "------->Darkestsecret : ";
            std::cout << book[input2].ft_get_darkestsecret() << std::endl;;
            std::cout << std::endl; 
        }
        else if(input == "EXIT")
        {
            exit(1);
        }
    }
}