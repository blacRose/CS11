/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include <deque>
using namespace std;

#include "reversepoem.cpp"

int main() {
  char type;
  cout << "String (enter s), or char (c)?" << endl;
  cin.get(type);
  cin.ignore();
  if (type == 'c') {
    reversePoem<char> hai;
    hai.input();
    hai.printPoem();
  } else if (type == 's') {
    reversePoem<string> hai;
    hai.input();
    hai.printPoem();
  } else {
    return 1;
  }
  return 0;
}
