#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using std::cout;
using std::string;

class Pokemon
{

public:

    Pokemon(); //constructor default
    Pokemon(int = 1, double = 1.0);
    Pokemon(bool, int, int, int, string); //constructor with arguments
    Pokemon(const Pokemon &);
    ~Pokemon(); //destructor
    
    void levelUp();
    void evolve();
    void setStrength(int);
    double getStrength() const;
    void setArmor(int);
    int getArmor() const;
    void setName(string );
    string getName() const;
    void setLevel(int);
    int getLevel() const;
    int showMaxLevel() const;
    void rest() const;
    void showPokemonInfo() const;
    string showOwner() const;
    
private:
    bool isEvolved;
    int level;
    double strength;
    int armor;
    string name ;
    const string owner = "ash";
    const int MAXLEVEL = 100;

};

#endif; //POKEMON_H