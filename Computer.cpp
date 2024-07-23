#include "Computer.h"
#include <cstdlib>
#include <ctime>

Computer::Computer(const string& name) : name(name) {
    srand(time(0)); // Initialize random seed
}

char Computer::makeMove() {
    return 'R'; // Default case
}

string Computer::getName() {
    return name;
}