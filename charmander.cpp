#include <iostream>
#include <stdio.h>
#include "Charmander.h"
using namespace std;

// Default Constructor
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");
    cout << "Default Constructor (Charmander)\n";
}

// Parameterized Constructor
Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s)
    : Pokemon(name, hp, att, def, t) {
    skills = s;
    cout << "Overloaded Constructor (Charmander)\n";
}

// speak() Implementation
void Charmander::speak() {
    cout << "Charmander-char\n";
}

// printStats() Implementation
void Charmander::printStats() {
    Pokemon::printStats();
    cout << "Skills: ";
    for (int i = 0; i < skills.size(); i++) {
        cout << skills[i] << "\t";
    }
    cout << endl;
}
