#include <fstream>
class boundedstack
{
public:
  void push(std::string);
  std::string pop();
  void read(std::string);
  std::string tops();
};
class boundedstacka : public boundedstack {
public:
  boundedstacka() : size(0) {};
private:
  std::string data[50];
  size_t size;
};
class boundedstackb : public boundedstack {
public:
  boundedstackb() : top(50), size(0) {};
private:
  std::string data[50];
  size_t size;
  size_t top;
};

void boundedstack::read(std::string infi)
{
  std::ifstream iflol;
  std::string temps;
  iflol.open(infi);
  while (getline(iflol, temps)) {
    push(temps);
  }
  iflol.close();
}