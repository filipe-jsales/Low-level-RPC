#include <iostream>
using std::cout;

#include "Pokemon.h"
#include "Pokemon.cpp"

int main()
{
    Pokemon pikachu(false);
    Pokemon charizard(pikachu);//copy constructor
    
    pikachu.setName("Pikachu");
    pikachu.setArmor(2);
    pikachu.setName("");
    pikachu.showMaxLevel();
    pikachu.evolve();
    pikachu.showPokemonInfo();
    pikachu.showOwner();

    cout << "\n";
    charizard.setName("Charizard");
    charizard.evolve();
    charizard.setArmor(2);
    charizard.setLevel(10);
    charizard.showPokemonInfo();
    charizard.showMaxLevel();
    return 0;
}