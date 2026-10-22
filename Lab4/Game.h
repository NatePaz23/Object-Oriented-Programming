#ifndef GAME_H
#define GAME_H
#include "rpg.h"
#include <vector>
#include <set>
using namespace std;

class Game {

    private: 
    vector<RPG*> players;
    set<int> live_players;

    public:
    Game();

    void generatePlayers(int n);
    void selectPlayers();
    void endround(RPG* winner, RPG* loser, int loseerIndex);
    void battleRount();
    void gameloop();
    void printFinalResults();

    ~Game();
};
#endif

