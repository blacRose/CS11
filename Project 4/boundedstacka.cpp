#include <iostream>
#include "boundedstacka.h"

boundedstacka::boundedstacka() {}

void boundedstacka::push(std::string pdata)
{
  if (data.size() == 50)
  {
    data.pop();
  }
  // shift all elements and add new to beginnning
  data.push(pdata)
}
std::string boundedstacka::pop()
{
  return data.pop();
}