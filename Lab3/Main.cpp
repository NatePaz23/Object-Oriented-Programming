//main.cpp
#include <iostream>
#include "rpg.h"

using namespace std;

int main() {
RPG p1 = RPG("Wiz",0,0.2,60,1);
RPG p2 = RPG();

printf("%s Current Stats\n", p1.getName().c_str()); 
printf("Hits Taken: %i\t Luck: %f\t EXP: %f\t Level: %i\n", p1.getHitsTaken(), p1.getluck(),p1.getexp(), p1.getlevel());

// Print P2

//Call setHitsTaken on  p2 


cout<<"\nP2 hits taken ";
// Print out the hits_taken

cout << "0 is dead, 1 is alive\n";
// call isAlive on both P1 and p2 

return 0;

}

