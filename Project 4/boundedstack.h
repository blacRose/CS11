#include <iostream>
#include <fstream>

class boundedstack
{
public:
  void read(std::string infi)
  {
    std::ifstream iflol;
    std::string temps;
    iflol.open(infi);
    while (getline(iflol, temps)) {
      push(temps);
    }
    iflol.close();
  }
  void shift(std::string dir)
  {
    if (dir == "up")
    {
      std::string temporary;
      for (size_t i = top; i < 50; i++)
      {
        temporary = data[i];
        data[i+1] = temporary;
      }
    } else if (dir == "down"){
      std::string temporary;
      for (size_t i = size; i > 0; i--)
      {
        temporary = data[i];
        data[i+1] = temporary;
      }
    }
  }
  virtual void push(std::string) = 0;
  virtual std::string pop() = 0;
  virtual std::string tops() = 0;
protected:
  std::string data[50];
  size_t top;
  size_t size;
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

