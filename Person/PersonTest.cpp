#include <iostream>
#include "Person.hpp"

int main() {
    Person p1("one", "Two", 123);
    Person p2("one", "Three", 143);

    std::cout << "p1" << p1.getName() << std::endl;
    std::cout << "p2" << p2.getName() << std::endl;

    return 0;
}
