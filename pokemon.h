#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>
using namespace std;

class Pokemon {
public:
    Pokemon();  // Default constructor
    Pokemon(string name, int hp, int att, int def, vector<string> type);  // Parameterized constructor

    virtual void speak();  // Pure virtual function to speak
    virtual void printStats();  // Pure virtual function to print stats

protected:
    string name;  // Name of the Pokémon
    int hp, att, def;  // Attributes: Health Points, Attack, and Defense
    vector<string> type;  // Vector of Pokémon types
};
#endif
