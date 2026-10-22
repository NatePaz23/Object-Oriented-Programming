
#include <iostream>
#include "rpg.h"
#include "Game.h"

using namespace std;

int main()
{
    // Create a Game object
    Game game;

    // Create num_players and set it to 10
    int num_players = 10;

    // Generate the players
    game.generatePlayers(num_players);

    // Start the battle royale
    game.gameLoop();

    // Print the final results
    game.printFinalResults();

    return 0;
}
