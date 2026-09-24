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

// updates name to new_name 
void Person::updateName(string new_name){
    name= new_name;
}

// updates age to new_age 
void Person::updateAge(int new_age){
    age = new_age;
}

// updates occupation to new_occupation 
void Person::updateOccupation(string new_occupation){
    occupation = new_occupation;
}

// updates lives_in_IE to true (moved location)
void Person::movedLocation(){
    lives_in_IE = !lives_in_IE;
}