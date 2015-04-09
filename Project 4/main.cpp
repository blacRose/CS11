/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include "boundedstack.h"

int main() {
  std::string infile = "";
  // read in from data file, a
  boundedstacka bsa;
  bsa.read(infile);
  // pop all in order, a
  std::cout << "BoundedStackA output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << bsa.pop() << std::endl;
  }
  // read in from data file, b
  boundedstackb bsb;
  bsb.read(infile);
  // pop all in order, b
  std::cout << "BoundedStackB output" << std::endl;
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << bsb.pop() << std::endl;
  }
}