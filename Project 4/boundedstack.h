#include <iostream>

class boundedstack {
public:
  boundedstack();
  void push(std::string);
  std::string pop();
  size_t size();
  std::string data[50];
private:
  size_t size;
}