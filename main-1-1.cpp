#include <iostream>
#include "Musician.h"

using namespace std;

int main() {
    Musician *rat, *ratJunoir, *ratSenoir, *disinfect;

    rat = new Musician("triangle",1000000);
    ratJunoir = new Musician("piano",2);
    ratSenoir= new Musician("guitar",5);
    disinfect = new Musician();

    // outputting
    std::cout << "rat" << " " << rat->get_instrument() << " " << rat->get_experience() << std::endl;
    std::cout << "ratJunoir" << " " << ratJunoir->get_instrument() << " " << ratJunoir->get_experience() << std::endl;
    std::cout << "ratSenoi" << " " << ratSenoir->get_instrument() << " " << ratSenoir->get_experience() << std::endl;
    std::cout << "disinfect" << " " << disinfect->get_instrument() << " " << disinfect->get_experience() << std::endl;
}