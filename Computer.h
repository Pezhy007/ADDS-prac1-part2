#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
private:
    string name;
public:
    Computer(const string& name);
    char makeMove() override;
    string getName() override;
};

#endif // COMPUTER_H