#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
private:
    string name;
public:
    Human(const string& name);
    char makeMove() override;
    string getName() override;
};

#endif // HUMAN_H