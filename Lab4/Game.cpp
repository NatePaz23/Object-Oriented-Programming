#include "Game.h"
#include <random>
#include <iterator>

using namespace std;

Game::Game() {
}

void Game:: generatePlayers(int n)
{
    for (int i = 0 ; i< n ; i++){
        players.push_back(new RPG());

        //Rename players
        string new_name = "NPC_" + to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);
     
    }
}