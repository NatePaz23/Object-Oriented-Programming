#include "Game.h"
#include <random>
#include <iterator>
#include <iostream>
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
void Game::endRound(RPG *winner, RPG *loser, int loserIndex)
{

winner-> setHitsTaken(0);
live_players.erase(loserIndex);
winner->updateExpLevel();

cout<< winner->getName()<< " won against "<< loser->getName()<<endl;

}

void Game::battleRound()
{
    int playerind1 =  selectPlayer();
    int playerind2 =  selectPlayer();

    if(playerind1 == playerind2){
        battleRound();
        return;
    }

RPG* player1 = players[playerind1];
RPG* player2 = players[playerind2];

while (player1->isAlive() && player2->isAlive())
{
    player1->attack(player2);

    if (player2->isAlive())
    {
        player2->attack(player1);
    }
}

if (player1->isAlive())
{
endRound(player1, player2, playerind2);
}
else
{
    endRound(player2, player1, playerind1);

}
}
