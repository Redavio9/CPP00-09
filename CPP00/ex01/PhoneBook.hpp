/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:31:29 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/13 09:40:59 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include"Contact.hpp"


class Phonebook
{
    private:
        Contact contact[8];
        int index;
    public :
        Phonebook();
        ~Phonebook();
        void add();
        void search();
        void displayPhoneBook();
};


#endif