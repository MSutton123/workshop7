#include <iostream>
#include "Orchestra.h"

using namespace std;

int main() {

    // making each new musician
    Musician *rat, *ratJunoir, *ratSenoir, *disinfect;

    rat = new Musician("triangle",1000000);
    ratJunoir = new Musician("piano",2);
    ratSenoir= new Musician("guitar",5);
    disinfect = new Musician();

    // make new orchestra
    Orchestra *bandstand;

    bandstand = new Orchestra(5);
    
}