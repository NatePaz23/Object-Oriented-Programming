#include "rpg.h"
#include <random>
#include <iostream>
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





void RPG::setName(string name)
{
    this->name = name;
}


void RPG::updateExpLevel()
{
    exp += 50;

    if (exp >= 100)
    {
        level = level + 1;
        exp = 0;
        luck += 0.1;
    }
}


void RPG::attack(RPG* opponent)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    float rand_num = dis(gen);

    bool hit = false;

    if (rand_num > HIT_FACTOR * opponent->getluck())
    {
        hit = true;
    }

    if (hit)
    {
        opponent->setHitsTaken(
            opponent->getHitsTaken() + 1
        );
    }
}


void RPG::printStats()
{
    cout << "Name: " << name;
    cout << "   Hits Taken: " << hits_taken;
    cout << "   Luck: " << luck;
    cout << "   Exp: " << exp;
    cout << "   Level: " << level;

    if (isAlive())
    {
        cout << "   Status: Alive";
    }
    else
    {
        cout << "   Status: Dead";
    }

    cout << endl;
}


RPG::~RPG()
{
}