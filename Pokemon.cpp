#include <iostream>
using std::cout;

#include "Pokemon.h"
using namespace std;
#include <string>
#include <string.h>

//constructor without arguments
Pokemon::Pokemon()
{
    isEvolved = false;
    level = 1;
    strength = 12;
    armor = 1;
    name = "unknown";
    cout << "Constructor default (without arguments)\n";
}
//constructor with arguments
Pokemon::Pokemon(bool aIsEvolved, int aLevel, int aStrength, int aArmor, string aName)
{
    isEvolved = aIsEvolved;
    level = aLevel;
    strength = aStrength;
    armor = aArmor;
    name = aName;
    cout << "Initializing Pokemon in constructor (with arguments) \n";
}

Pokemon::Pokemon(int age = 10)
{
    cout << "Calling copy constructor\n";
    this->age = age;
    this->vec = new int [age];
}

Pokemon::~Pokemon()
{
    delete [] this->vec;
}
void Pokemon::setStrength(int strength)
{
    this->strength = strength;
}

double Pokemon::getStrength()
{
    return this->strength; 
}

void Pokemon::setArmor(int armor)
{
    this->armor = armor;
}

int Pokemon::getArmor()
{
    return this->armor; 
}

void Pokemon::setName(string name)
{
    this->name = name;
}

string Pokemon::getName()
{
    return this->name;
}

void Pokemon::setLevel(int level)
{
    this->level = level;
}

int Pokemon::getLevel()
{
    return this->level;
}

void Pokemon::rest() const
{
    cout << "Pokemon resting now!\n";
}
void Pokemon::levelUp()
{
    this->level += 1;
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
    return this->owner;
}

int Pokemon::showMaxLevel() 
{
    return this->maxLevel;
}

int Pokemon::showAge()
{
    cout <<"Age: " << this->age << "\n";
}