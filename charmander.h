#ifndef Charmander_h
#define Charmander_h


#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon {
public:
    Charmander();  // Default constructor
    Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);  // Parameterized constructor

    void speak() override;  // Implementation of the speak function
    void printStats() override;  // Implementation of the printStats function

private:
    vector<string> skills;  // Skills that the Charmander knows
};
#endif
