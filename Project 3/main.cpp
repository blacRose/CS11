/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch

#include <iostream>
#include "list.h"
#include "lister.h"

int main(int argc, char const *argv[]) {
  lister lone, ltwo;

  return 0;
}*/

#include <iostream>
#include "list.h"
#include "lister.h"

using namespace std;
int main() {
  string poo = "";
  string inp;
  lister lone;
  lone.insert();
  while (poo != "q") {
    lone.movtob();
    cout << "q to quit or anything to keep going: ";
    cin >> poo;
  }
}
