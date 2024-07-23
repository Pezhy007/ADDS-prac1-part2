#include "Human.h"
#include <iostream>

Human::Human(const string& name) : name(name) {}

char Human::makeMove() {
    char move;
    cout << name << ", enter your move (R, P, S): ";
    cin >> move;
    return move;
}

string Human::getName() {
    return name;
}