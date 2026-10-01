#include "rpg.h"

RPG::RPG() {
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}
//constructor 
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
this->name = name;
this->hits_taken = hits_taken;
this->luck = luck;
this->exp = exp;
this->level = level;

}
//accessor functions
string RPG::getName() const{
    return name;
}

int RPG::getHitsTaken() const{
    return hits_taken;
}
float RPG::getluck () const{
    return luck;
}
float RPG::getexp() const{
    return exp;
}

int RPG::getlevel() const{
    return level;
}

//mutator 
void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

bool RPG::isAlive() const 
{
    return hits_taken < MAX_HITS_TAKEN;
}