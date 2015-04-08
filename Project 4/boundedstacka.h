#include <iostream>

class boundedstacka {
public:
  void push(std::string);
  std::string pop();
private:
  std::string data[50];
  size_t size;
}