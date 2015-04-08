#include <iostream>
#include "boundedstacka.h"

// uses a size var to see how many are in it.

boundedstacka::boundedstacka() {}

void boundedstacka::push(std::string pdata)
{
  if (data.size() == 50)
  {
    // remove the last el (oldest) in array, it's full.
    data[size] = "";
    size--;
  }
  // shift all elements and add new to beginnning
  std::string temporary;
  for (size_t i = data.size(); i > 0; i--)
  {
    temporary = data.data[i];
    data.data[i+1] = temporary;
  }
  data.data[0] = pdata;
  size++;
}
std::string boundedstacka::pop()
{
  // removes and returns the first (newest) element in the array.
  temporary = data.data[0];
  for (size_t i = 0; i > size; i--)
  {
    temporary = data.data[i+1];
    data.data[i] = temporary;
  }
  size--;
  return temporary;
}