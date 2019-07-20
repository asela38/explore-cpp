#include "Person.hpp"

std::string Person::getName()  {
      return firstName + " " + lastName;
}

Person::Person(std::string first, std::string last, int arbitary) 
    : firstName(first), lastName(last), arbitoryNumber(arbitary) {
    }
