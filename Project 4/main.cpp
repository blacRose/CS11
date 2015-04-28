/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include "boundedstack.h"

int main() {
  std::string infile = "weblog_unique.url";
  // read in from data file, a
  boundedstacka bsa;
  bsa.read(infile);
  // pop all in order, a
  std::cout << "BoundedStackA output" << std::endl << "----" << std::endl;
  bsa.empty();
  
  // read in from data file, b
  boundedstackb bsb;
  bsb.read(infile);
  // pop all in order, b
  std::cout << std::endl << "BoundedStackB output" << std::endl << "----" << std::endl;
  bsb.empty();
}