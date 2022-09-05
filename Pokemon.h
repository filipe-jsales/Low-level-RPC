#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{
//anyone can see this
public:
    Pokemon(); //constructor
    ~Pokemon(); //destructor
    
    //my methods
    void levelUp();
    void evolve();
    void setStrength(int strength);
    void showPokemonInfo() const;
    void setArmor(int armor);
    void setName(string name);

//not allowed for user to modify
private:
    string name;
    bool isEvolved;
    int level;
    double strength;
    int armor;
};

#endif; //POKEMON_H