#include <iostream>

class boundedstackb {
public:
  void push(std::string);
  std::string pop();
private:
  boundedstack data;
  size_t top;
}