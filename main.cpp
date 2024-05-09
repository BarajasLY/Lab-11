// main.cpp

#include <iostream>
#include "Charmander.h"  // Make sure this header file exists and includes Pokemon.h
using namespace std;

int main() {
    // Define the Pokémon types and skills
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    // Create a Charmander instance with parameters
    cout << "-------Constructor Created--------\n";
    Charmander charlie("Charlie", 100, 4, 4, pokemonType, skills);

    // Direct call to speak
    cout << "\n-------Direct Speak--------\n";
    charlie.speak();

    // Use base-class pointer to call speak
    Pokemon* p1 = &charlie;
    cout << "\n-------Speak called from Pokemon Pointer--------\n";
    (*p1).speak();

    // Use derived-class pointer to call speak
    Charmander* c1 = &charlie;
    cout << "\n-------Speak called from Charmander Pointer--------\n";
    (*c1).speak();

    // Call to print stats
    cout << "\n-------Print Stats--------\n";
    charlie.printStats();

    return 0;
}
