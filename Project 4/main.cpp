/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include "boundedstacka.h"
#include "boundedstackb.h"

int main() {
  std::string infile = "";
  // read in from data file, a
  boundedstacka.read(infile);
  // pop all in order, a
  std::cout << "BoundedStackA output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << boundedstacka.pop() << std::endl;
  }
  // read in from data file, b
  boundedstackb.read(infile);
  // pop all in order, b
  std::cout << "BoundedStackB output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << boundedstackb.pop() << std::endl;
  }
}