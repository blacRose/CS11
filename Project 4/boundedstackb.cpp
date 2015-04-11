#include <iostream>
#include "boundedstack.h"

// ordered starting at 50 (top)... stores from the back of the array, up.
// Handles overflow by pushing the first, oldest element (50) into nothing, then
// shifting the other elements down, and throws the new element in top.
// The newest element is at the value of top (when full, 1), going back in time to 50.


void boundedstackb::push(std::string pdata)
{
  if (top == 0) {
    pop(top);
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