#include <iostream>
#include "Pokemon.h"
#include <string>
#include <string.h>
using std::cout;

//constructor without arguments
Pokemon::Pokemon()
{
    this->isEvolved = false;
    this->level = 1;
    this->strength = 1;
    this->armor = 1;
    this->name = "unknown";
    cout << "Constructor default (without arguments)\n";
}
// constructor with arguments
Pokemon::Pokemon(bool aIsEvolved, int aLevel, int aStrength, int aArmor, string aName)
{
    this->isEvolved = aIsEvolved;
    this->level = aLevel;
    this->strength = aStrength;
    this->armor = aArmor;
    this->name = aName;
    cout << "Initializing Pokemon in constructor (with arguments) \n";
}

//default parameters in constructor
Pokemon::Pokemon(int level, double strength)
{
    setLevel(level);
    setStrength(strength);
}

Pokemon::Pokemon(const Pokemon& other)
{
    this->strength = other.strength;
    // this->armor = other.armor;
    // this->level = other.level;
    // this->isEvolved = other.isEvolved;
}

Pokemon::~Pokemon()
{
}
void Pokemon::setStrength(int strength)
{
    this->strength = strength;
}

double Pokemon::getStrength() const
{
    return this->strength; 
}

void Pokemon::setArmor(int armor)
{
    if (armor >=0 )
    {
        this->armor = armor;
        return;
    }
    this->armor = 0;
}

int Pokemon::getArmor() const
{
    return this->armor; 
}

void Pokemon::setName(string name)
{
    if (name != "")
    {
        this->name = name;
        return;
    }
    this->name = "unknown";
}

string Pokemon::getName() const
{
    return this->name;
}

void Pokemon::setLevel(int level)
{
    if (level > 0)
    {
        this->level = level;
        return;
    }
    this->level = 0;
}

int Pokemon::getLevel() const
{
    return this->level;
}

void Pokemon::rest() const
{
    cout << "Pokemon resting now!\n";
}
void Pokemon::levelUp()
{
    if (this->level < this->MAXLEVEL)
    {
        this->level += 1;
        return;
    }
    this->level +=0;
}
void Pokemon::evolve()
{
    this->isEvolved = true;
}
void Pokemon::showPokemonInfo() const
{
    cout << "Name: " << name << '\n';
    cout << "is Evolved?  " << isEvolved << '\n';
    cout << "Level: " << level << '\n';
    cout << "Strength: " << strength << '\n';
    cout << "Armor: " << armor << '\n';
}

string Pokemon::showOwner() const
{
    cout << "Owner: " << this->owner << "\n";
}

int Pokemon::showMaxLevel() const
{
    cout << "MAX LEVEL: " << this->MAXLEVEL << "\n";
}
