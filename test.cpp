#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		void setType(std::string newtype);
		std::string getType() const;
		~Weapon();
};

class HumanA
{
	private:
			std::string name;
			Weapon &weapon;
            // L'arme de HumanA ne peut pas être
            // NULL et doit être modifiée en externe, elle est donc utilisée comme variable de référence
	public:
			HumanA(std::string name, Weapon &weapon);
            // Dans les constructeurs qui initialisent des variables de référence,
            // vous devez utiliser une liste d'initialisation plutôt que la méthode habituelle.
			void attack();
			void setWeapon(Weapon &newweapon);
			~HumanA();
};

class HumanB
{
	private:
			std::string name;
			Weapon *weapon;
            // HumanB의 weapon은 NULL일 수 있고 외부에서 변경해야하기에 ptr변수로 사용
	public:
			HumanB(std::string name);
			HumanB(std::string name, Weapon &weapon);
			void attack();
			void setWeapon(Weapon &newweapon);
			~HumanB();
};

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}
// Constructeur utilisant la liste d'initialisation

HumanB::HumanB(std::string name)
{
	this->name = name;
}
int main()
{
    // {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    // }
    // {
    // Weapon club = Weapon("crude spiked club");
    // HumanB jim("Jim");
    // jim.setWeapon(club);
    // jim.attack();
    // club.setType("some other type of club");
    // jim.attack();
    // }
    return 0;
}






while (true) {
		displayPhoneBook();
		std::cout << "Enter the index number(0 ~ " << len - 1 << "): ";
		std::cin >> search;
		if (std::cin.eof())
			return ;
		if (std::cin.fail() || search < 0 || search >= len) 
		{
			std::cout << "\nAn error occurred in the input. Please try again.\n";
			std::cin.clear();
			std::cin.ignore(4096, '\n');
			continue;
		}
		break;
}