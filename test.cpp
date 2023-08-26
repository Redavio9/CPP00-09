#include <iostream>
#include<iomanip>
// void set_name(std::string x)
// {
    
// }
class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string phonenumber;
        std::string nickname;
        std::string darkestsecret;
    public :
        void ft_set_name(std::string x)
        {
            firstname = x;
        };
        void ft_set_lastname(std::string x)
        {
            lastname = x;
        };
        void ft_set_phonenumber(std::string x)
        {
            phonenumber = x;
        };
        void ft_set_nickname(std::string x)
        {
            nickname = x;
        };
        void ft_set_darkestsecret(std::string x)
        {
            darkestsecret = x;
        };
                    // -----------------//
        std::string ft_get_firstname()
        {
            return(firstname);
        };
        std::string ft_get_lastname()
        {
            return(lastname);
        };
        std::string ft_get_phonenumber()
        {
            return(phonenumber);
        };
        std::string ft_get_nickname()
        {
            return(nickname);
        };
        std::string ft_get_darkestsecret()
        {
            return(darkestsecret);
        };
};

class Phonebook
{
    Contact contact[8];   
};




int main()
{
    Contact book[8];
    Phonebook phone;
    std::string input;
    std::string y;
    int index = 0;
    int cnt = 1;

    // input = book[1].ft_get_firstname();
    // std::cout << input.length();
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
            std::cout << "***************** Entrer Index Contact ***************** : ";
            std::cin >> cnt;
            std::cout << "-----------------------------------------------------------------------------------------------------------\n";
            std::cout << "HI !!" << book[0].ft_get_firstname().length();
            while(index)
            {
             if(index == 0)
                 index = 1;
             // std::cout << "|              "; 
             book[index - 1].ft_get_firstname();
             std::cout << std::setw(25);
             book[index - 1].ft_get_lastname();
             std::cout << "|              ";
             // std::cout << std::endl;
             book[index- 1].ft_get_phonenumber();
             std::cout << "|              ";
             // std::cout << std::endl;
             book[index - 1].ft_get_nickname();
             std::cout << "|              ";
             // std::cout << std::endl;
             book[index - 1].ft_get_darkestsecret();
             std::cout << "|              ";
             std::cout << std::endl;
             std::cout << "-----------------------------------------------------------------------------------------------------------\n";
             // std::cout << std::endl;
             index--;
            }
                // if()
    //             // std::cout << "|    First Name     |";
    //             // std::cout << "     Last Name     |";
    //             // std::cout << "     nickname     |";
    //             // std::cout << "     phone number     |";
    //             // std::cout << "     Darkestsecret    |";
    //             // std::cout << std::endl;
    //             std::cout << "-----------------------------------------------------------------------------------------------------------\n";
    //         if (cnt != 0)
    //         {
                
    //             // std::cout << "HI !!!";
    //             // std::cout << "|     First Name     |";
    //             // std::cout << "     Last Name     |";
    //             // std::cout << "     nickname     |";
    //             // std::cout << "     phone number     |";
    //             // std::cout << "     Darkestsecret    |";
    //             // std::cout << std::endl;
    //             // std::cout << "-----------------------------------------------------------------------------------------------------------\n";
    //             std::cout << "|             ";
    //             book[cnt - 1].ft_get_firstname();
    //             std::cout << "|             ";
    //             book[cnt - 1].ft_get_lastname();
    //             std::cout << "|             ";
    //             // std::cout << std::endl;
    //             book[cnt - 1].ft_get_phonenumber();
    //             std::cout << "|             ";
    //             // std::cout << std::endl;
    //             book[cnt - 1].ft_get_nickname();
    //             std::cout << "|             ";
    //             // std::cout << std::endl;
    //             book[cnt - 1].ft_get_darkestsecret();
    //             std::cout << "|             ";
    //             std::cout << std::endl;
    //             std::cout << "-----------------------------------------------------------------------------------------------------------\n"; 
    //         }
    //         else
    //         {
    //             while(index)
    //             {
    //                 if(index == 0)
    //                     index = 1;
    //                 // std::cout << "|              ";
    //                 y.length(); 
    //                 book[index - 1].ft_get_firstname();
                    
    //                 std::cout << std::setw(25);
    //                 book[index - 1].ft_get_lastname();
    //                 std::cout << "|              ";
    //                 // std::cout << std::endl;
    //                 book[index- 1].ft_get_phonenumber();
    //                 std::cout << "|              ";
    //                 // std::cout << std::endl;
    //                 book[index - 1].ft_get_nickname();
    //                 std::cout << "|              ";
    //                 // std::cout << std::endl;
    //                 book[index - 1].ft_get_darkestsecret();
    //                 std::cout << "|              ";
    //                 std::cout << std::endl;
    //                 std::cout << "-----------------------------------------------------------------------------------------------------------\n";
    //                 // std::cout << std::endl;
    //                 index--;
    //             }
            // }
    //         // std::cout << std::endl;
    //     }
    //     else if(input == "EXIT")
    //     {
    //         exit(1);
    //     }
    }
    }
}