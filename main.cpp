#include <iostream>
using std::cout;

#include "Pokemon.h"
#include "Pokemon.cpp"

int main()
{
    cout << "Initializing Pokemon in main \n";

    cout << '\n';
    Pokemon pikachu;
    pikachu.setName("Pikachu");
    pikachu.setStrength(20);
    pikachu.evolve();
    pikachu.setArmor(32);
    pikachu.showPokemonInfo();

    //new instance of an obeject
    cout << '\n';
    cout << '\n';
    Pokemon charizard;
    charizard.setName("Charizard");
    charizard.setStrength(999);
    charizard.evolve();
    charizard.setArmor(7);
    charizard.levelUp();
    charizard.showPokemonInfo();
    return 0;
}