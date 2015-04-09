#include <iostream>
#include "boundedstack.h"

// uses a size var to see how many are in it.
// ordered starting at 0 (size)... stores from the front of the array

boundedstacka::boundedstacka() : size(0) {}

void boundedstacka::push(std::string pdata)
{
  if (size() == 50)
  {
    // remove the last el (oldest) in array, it's full.
    data[size] = "";
    size--;
  }
  // shift all elements and add new to beginnning
  std::string temporary;
  for (size_t i = size(); i > 0; i--)
  {
    temporary = data[i];
    data[i+1] = temporary;
  }
  data[0] = pdata;
  size++;
}
std::string boundedstacka::pop()
{
  // removes and returns the first (newest) element in the array.
  temporary = data[0];
  for (size_t i = 0; i > size; i--)
  {
    temporary = data[i+1];
    data[i] = temporary;
  }
  size--;
  return temporary;
}
std::string boundedstacka::top()
{
  return data[0];
}
void boundedstacka::read(std::string infi)
{
  std::ifstream iflol;
  std::string temps;
  iflol.open(infi);
  while (getline(iflol, temps)) {
    push(temps);
  }
  iflol.close();
}