/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
#include <queue>
using namespace std;

#include "reversepoem.cpp"

int main() {
  char type;
  cout << "String (enter s), or char (c)?" << endl;
  cin >> type;
  if (type == 'c') {
    reversePoem<char> hai;
    hai.input();
    hai.sortPoem();
    hai.printPoem();
  } else if (type == 's') {
    reversePoem<string> hai;
    hai.input();
    hai.sortPoem();
    hai.printPoem();
  } else {
    return 1;
  }
  return 0;
}
