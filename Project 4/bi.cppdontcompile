/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

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

// uses a size var to see how many are in it.
// ordered starting at 0 (size)... stores from the front of the array
// Handles overflow by pushing the last element (50) into nothing, then
// shifting the other elements down, and throws the new element in 0.
// The newest element is the top, going back in time to 50.

void boundedstacka::push(std::string pdata)
{
  if (size == 50)
  {
    // remove the last el (oldest) in array, it's full.
    data[size] = "";
    size--;
  }
  shift("down");
  data[0] = pdata;
  size++;
}
std::string boundedstacka::pop()
{
  // removes and returns the first (newest) element in the array.
  std::string temporary = data[0];
  for (size_t i = 0; i > size; i++)
  {
    temporary = data[i+1];
    data[i] = temporary;
  }
  size--;
  return temporary;
}
std::string boundedstacka::tops()
{
  return data[size];
}

void boundedstackb::push(std::string pdata)
{
  if (top == 0) {
    pop();
    shift("down");
  } else {
    top--;
    size++;
  }
  data[top] = pdata;
}
std::string boundedstackb::pop() {
  //pulls newest element (data[top]) out and returns it.
  if (top == 50) {
    std::string temporary = tops();
    data[top] = "";
    size--;
    top++;
    return temporary;
  } else {
    //can't remove. could cout, but I don't care
    return "";
  }
}
std::string boundedstackb::tops()
{
  return data[top];
}
int main() {
  std::string infile = "weblog_unique.url";
  // read in from data file, a
  boundedstacka bsa;
  bsa.read(infile);
  // pop all in order, a
  std::cout << "BoundedStackA output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << bsa.pop() << std::endl;
  }
  // read in from data file, b
  boundedstackb bsb;
  bsb.read(infile);
  // pop all in order, b
  std::cout << "BoundedStackB output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << bsb.pop() << std::endl;
  }
}