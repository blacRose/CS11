/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/
// TODO: overload >>!

#include <iostream>
#include <queue>
using namespace std;

#include "reversepoem.cpp"

int main() {
  char type;
  cout << "String (enter s), or char (c)?" << endl;
  cin >> type;
  reversePoem<string> poetyo;
  if (type == 'c') {
    delete &poetyo;
    reversePoem<char> poetyo;
  } else if (type == 's') {
    delete &poetyo;
    reversePoem<string> poetyo;
  }
    poetyo.input();
    poetyo.sortPoem();
    poetyo.printPoem();
}

