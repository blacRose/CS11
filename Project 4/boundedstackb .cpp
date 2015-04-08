#include <iostream>

boundedstacka::boundedstackb() : top(50) {}

void boundedstacka::push(std::string pdata)
{
  if (top == 0)
  {
    data.pop();
  } else {
    top--;
  }
  data.data[top] = pdata;
}
std::string boundedstacka::pop()
{
  return data.pop();
}