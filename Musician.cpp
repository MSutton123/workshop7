#include <iostream>
#include "Musician.h"

using namespace std;

Musician::Musician() {
    instrumentation = "null";
    years = 0;
}

Musician::Musician(std::string instrument, int experience) {
    instrumentation = instrument;
    years = experience;
    return;
}

string Musician::get_instrument() {
    return instrumentation;
}

int Musician::get_experience() {
    return years;
}