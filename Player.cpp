#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

int main() {
    Human player1("Player1");
    Computer player2("Computer");

    Referee ref;
    Player* winner = ref.refGame(&player1, &player2);

    if (winner) {
        cout << winner->getName() << " Wins." << endl;
    } else {
        cout << "It's a Tie." << endl;
    }
    return 0;
}