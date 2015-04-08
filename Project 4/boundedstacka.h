#include <iostream>

class boundedstacka {
public:
  void push(std::string);
  std::string pop();
private:
  boundedstack data;
}