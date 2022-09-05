#include <iostream>
#include "orchestra.h"

using namespace std;

Orchestra::Orchestra() {
    amount = 0;
    current = 0;
}
        
Orchestra::Orchestra(int size) {
    amount = size;
    band = new Musician[amount];
    current = 0;
}

int Orchestra::get_current_number_of_members() {
    return current;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < amount; i++) {
        if (instrument == band[i].get_instrument()) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return band;
}


// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false

bool Orchestra::add_musician(Musician new_musician) {
    
    if ( current < amount) {
        band[current] = new_musician;
        current++;
        return true;
    }
    else {
        return false;
    }
}

Orchestra::~Orchestra() {
}