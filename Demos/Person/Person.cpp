//Person.cpp
#include "Person.h"

Person::Person(){
    name = "" ;
    age = 1;
    occupation = "";
    lives_in_IE = false;
}

Person::Person::Person(string name, int age, string occupation, bool lives_in_IE){

  this->name = name;
  this->age = age;
  this->occupation = occupation;
  this->lives_in_IE = lives_in_IE;
}
