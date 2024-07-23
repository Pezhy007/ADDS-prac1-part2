#include "Referee.h"
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    cout << player1->getName() << " chose " << move1 << endl;
    cout << player2->getName() << " chose " << move2 << endl;

    if (move1 == move2) {
        cout << "It's a tie!" << endl;
        return nullptr; // Tie
    } else if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') || (move1 == 'P' && move2 == 'R')) {
        cout << player1->getName() << " wins!" << endl;
        return player1; // Player 1 wins
    } else {
        cout << player2->getName() << " wins!" << endl;
        return player2; // Player 2 wins
    }
}