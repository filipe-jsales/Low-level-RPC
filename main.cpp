#include <iostream>
using std::cout;

#include "Pokemon.h"
#include "Pokemon.cpp"

int main()
{
    cout << "Initializing Pokemon in main \n";

    cout << '\n';
    Pokemon pikachu(1);
    // pikachu.showAge();
    pikachu.setName("Pikachu");
    pikachu.setStrength(20);
    pikachu.evolve();
    pikachu.setArmor(32);
    pikachu.setLevel(12);
    pikachu.rest();
    cout <<"Owner: " << pikachu.showOwner() << "\n";
    cout <<"Max Level: " << pikachu.showMaxLevel() << "\n";
    pikachu.showPokemonInfo();


    //new instance of an obeject
    cout << '\n';
    cout << '\n';
    Pokemon charizard(pikachu); //copy constructor
    // charizard.showAge();
    charizard.setName("Charizard");
    charizard.setStrength(999);
    charizard.setArmor(7);
    charizard.setLevel(32);
    charizard.levelUp();
    charizard.levelUp();
    charizard.evolve();
    cout <<"Owner: " << charizard.showOwner() << "\n";
    cout <<"Max Level: " << charizard.showMaxLevel() << "\n";
    charizard.showPokemonInfo();
    cout << "\n";

    //Copy constructor example:
    Pokemon pikachuCopia(pikachu);
    pikachuCopia.showPokemonInfo();
    return 0;
}