#include <iostream>
#include "boundedstackb.h"

boundedstackb::boundedstackb() : top(50) {}

void boundedstackb::push(std::string pdata) {
  if (top == 0) {
    pop();
  } else {
    top--;
  }
  data[top] = pdata;
}
std::string boundedstackb::pop() {
  if (size != 0) {
    std::string temporary = data[top];
    data[top] = "";
    size--;
    data.top++;
    return temporary;
  } else {
    //can't remove. could cout, but I don't care
    return "";
  }
}