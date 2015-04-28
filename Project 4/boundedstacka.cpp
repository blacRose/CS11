#include <iostream>
#include "boundedstack.h"

// uses a size var to see how many are in it.
// ordered starting at 0 (size)... stores from the front of the array
// Handles overflow by pushing the last element (49) into nothing, then
// shifting the other elements down, and throws the new element in 0.
// The newest element is the top, going back in time to 49.

void boundedstacka::push(std::string pdata)
{
    if (size > 49)
    {
        // remove the last el (oldest) in array, it's full.
        data[49] = "";
        size--;
    }
    shift("down", size);
    data[0] = pdata;
    size++;
}
std::string boundedstacka::pop()
{
    // removes and returns the first (newest) element in the array.
    std::string temporary = data[0];
    // shift all elements up one.
    size--;
    for (int i = 0; i < 49; i++)
        data[i] = data[i+1];
    return temporary;
}