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

int Game::selectPlayer()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(
        0, live_players.size() - 1
    );

    // Pick random index
    int randomIndex = dist(gen);

    // Advance iterator to that index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;

    return selectedIndex;
}