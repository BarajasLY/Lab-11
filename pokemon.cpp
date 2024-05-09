// Pokemon.cpp

#include <iostream>
#include "Pokemon.h"
using namespace std;

// Default Constructor
Pokemon::Pokemon() {
    name = "unidentified";
    hp = 0;
    att = 0;
    def = 0;
    cout << "Default Constructor (Pokemon)\n";
}

// Parameterized Constructor
Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type) {
    this->name = name;
    this->hp = hp;
    this->att = att;
    this->def = def;
    this->type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
}
void Pokemon::speak() {
    cout << "...\n";
}
void Pokemon::printStats() {
    printf("Name: %s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, def, att);
    cout << "Type: ";
    for (int i = 0; i < type.size(); i++) {
        cout << type[i] << "\t";
    }
    cout << endl;
}
