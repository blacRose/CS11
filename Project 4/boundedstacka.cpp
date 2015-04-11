#include <iostream>
#include "boundedstack.h"

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
  for (size_t i = 0; i > size; i--)
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