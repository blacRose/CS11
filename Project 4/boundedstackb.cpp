#include <iostream>
#include "boundedstack.h"

// ordered starting at 50 (top)... stores from the back of the array

void boundedstackb::push(std::string pdata)
{
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