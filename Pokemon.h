#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{

public:

    Pokemon(); //constructor default
    Pokemon(bool aIsEvolved, int aLevel, int aStrength, int aArmor, string aName); //constructor with arguments
    ~Pokemon(); //destructor
    
    //methods to copy constructor
    Pokemon(int age);

    //my methods
    void levelUp();
    void evolve();
    void setStrength(int strength);
    double getStrength();
    void setArmor(int armor);
    int getArmor();
    void setName(string name);
    string getName();
    void setLevel(int level);
    int getLevel();
    int showMaxLevel();
    int showAge();

    //const methods
    void rest() const;
    void showPokemonInfo() const;
    string showOwner() const;
    
private:
    bool isEvolved;
    int level;
    double strength;
    int armor;
    string name ;

    //const attributes
    const string owner = "ash";
    const int maxLevel = 100;

    //attributes to copy constructor
    int * vec;
    int age;



};

#endif; //POKEMON_H