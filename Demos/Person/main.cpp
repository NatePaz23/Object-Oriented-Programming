using namespace std;
#include "Person.h"
#include <iostream>

int main() 
{
    Person bob = Person("Bob", 100, "retried", true);
   printf("Name: %s Age: %i Occu %s Lives in %i \n", bob.getName().c_str(), bob.getAge(), bob.getOccupation().c_str(), bob.getLivesInIE());

return 0;
}