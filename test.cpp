#include <iostream>
#include <string>

class Zombie {
public:
    Zombie() {} // Constructeur par défaut

    Zombie(std::string name) : name(name) {}
    void announce() const {
        std::cout << name << " : Braaaiiinnssss..." << std::endl;
    }

private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N]; // Alloue N objets Zombie en une seule allocation

    for (int i = 0; i < N; ++i) {
        horde[i] = Zombie(name); // Initialise chaque zombie avec le nom donné
    }

    return horde; // Retourne un pointeur vers le premier zombie
}

int main() {
    int numZombies = 5;
    std::string zombieName = "Fred";

    Zombie* horde = zombieHorde(numZombies, zombieName);

    // Appel de la fonction announce() pour chacun des zombies
    for (int i = 0; i < numZombies; ++i) {
        horde[i].announce();
    }

    // N'oubliez pas de libérer la mémoire allouée
    delete[] horde;

    return 0;
}