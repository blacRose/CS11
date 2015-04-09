#include <iostream>
#include <fstream>

class boundedstack
{
public:
  void read(const char *);
  virtual void push(std::string);
};
class boundedstacka : public boundedstack {
public:
  boundedstacka() : size(0) {};
  virtual void push(std::string);
  std::string pop();
  std::string tops();
private:
  std::string data[50];
  size_t size;
};
class boundedstackb : public boundedstack {
public:
  boundedstackb() : top(50), size(0) {};
  virtual void push(std::string);
  std::string pop();
  std::string tops();
private:
  std::string data[50];
  size_t size;
  size_t top;
};

void boundedstack::read(const char * infi[256])
{
  std::ifstream iflol;
  std::string temps;
  iflol.open(infi);
  while (getline(iflol, temps)) {
    push(temps);
  }
  iflol.close();
}