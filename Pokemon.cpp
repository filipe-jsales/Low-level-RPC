#include <iostream>
using std::cout;

#include "Pokemon.h"
#include <string>
using namespace std;

Pokemon::Pokemon()
{
    isEvolved = false;
    level = 1;
    strength = 12;
    armor = 1;
    name = "unknown";
    cout << "Initializing Pokemon in constructor \n";

}

Pokemon::~Pokemon()
{

}

void Pokemon::showPokemonInfo() const
{
    cout << "Name: " << name << '\n';
    cout << "is Evolved?  " << isEvolved << '\n';
    cout << "Level: " << level << '\n';
    cout << "Strength: " << strength << '\n';
    cout << "Armor: " << armor << '\n';
}

void Pokemon::levelUp()
{
    this->level += level;
}

void Pokemon::setStrength(int strength)
{
    this->strength = strength;
}

void Pokemon::evolve()
{
    this->isEvolved = true;
}

void Pokemon::setArmor(int armor)
{
    this->armor = armor;
}

void Pokemon::setName(string name)
{
    this->name = name;
}