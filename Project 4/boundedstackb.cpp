#include <iostream>
#include "boundedstackb.h"

// ordered starting at 50 (top)

boundedstackb::boundedstackb() : top(50) size(0) {}

void boundedstackb::push(std::string pdata) {
  if (top == 1) {
    pop();
  } else {
    top--;
    size++;
  }
  data[top] = pdata;
}
std::string boundedstackb::pop() {
  //pulls newest element (data[top]) out and returns it.
  if (top == 50) {
    std::string temporary = top();
    data[top] = "";
    size--;
    top++;
    return temporary;
  } else {
    //can't remove. could cout, but I don't care
    return "";
  }
}
std::string boundedstackb::top()
{
  return data[top];
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