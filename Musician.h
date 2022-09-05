#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

using namespace std;

// Class definition for a Musician
class Musician
{
public:
        std::string instrumentation;
        int years;

        Musician();                  // a default constructor 
        // a constructor that takes the instrument played and the years of experience
        Musician(std::string instrument, int experience);      
        std::string get_instrument();    // returns the instrument played
        int get_experience();       // returns the number of years experience
};
#endif //MUSICIAN_H