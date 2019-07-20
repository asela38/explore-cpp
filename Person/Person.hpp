#include <string>

class Person {
 public:
    Person(std::string first, std::string last, int arbitary);
    std::string getName();

  private:
    std::string firstName;
    std::string lastName;
    int arbitoryNumber;
};
