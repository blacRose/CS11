#include <iostream>

class boundedstacka {
public:
  void push(std::string);
  std::string pop();
  void read(std::string);
private:
  std::string data[50];
  size_t size;
}