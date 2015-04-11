#include <iostream>
#include <fstream>

class boundedstack
{
public:
  void read(const char infi[256])
  {
    std::ifstream iflol;
    std::string temps;
    iflol.open(infi);
    while (getline(iflol, temps)) {
      push(temps);
    }
    iflol.close();
  }
  virtual void push(std::string) = 0;
  virtual std::string pop() = 0;
  virtual std::string tops() = 0;
protected:
  std::string data[50];
};
class boundedstacka : public virtual boundedstack {
public:
  boundedstacka() : size(0) {};
  virtual void push (std::string);
  virtual std::string pop();
  virtual std::string tops();
private:
  size_t size;
};
class boundedstackb : public virtual boundedstack {
public:
  boundedstackb() : top(50), size(0) {};
  virtual void push (std::string);
  virtual std::string pop();
  virtual std::string tops();
private:
  size_t top;
  size_t size;
};

