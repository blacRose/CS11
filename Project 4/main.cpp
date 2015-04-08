/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include "boundedstack.h"
#include "boundedstacka.h"
#include "boundedstackb.h"

int main() {
  std::string infile = "";
  // read in from data file, a
  boundedstacka.read(infile);
  // pop all in order, a
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << boundedstacka.pop() << endl;
  }
  // read in from data file, b
  boundedstackb.read(infile);
  // pop all in order, b
  for (size_t i = 0; i <= 50; i++)
  {
    std::cout << i << ": " << boundedstackb.pop() << endl;
  }
}