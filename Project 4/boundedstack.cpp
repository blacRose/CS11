#include <iostream>

boundedstack::boundedstack() : size(0) {}

size_t boundedstack::size()
{
  return size;
}
void boundedstack::push(std::string pdata)
{
  std::string temporary;
  for (size_t i = data.size(); i > 0; i--)
  {
    temporary = data.data[i];
    data.data[i+1] = temporary;
  }
  data.data[0] = pdata;
  size++;
}
std::string boundedstack::pop()
{
  temporary = data.data[size];
  data[size] = "";
  size--;
  return temporary;
}