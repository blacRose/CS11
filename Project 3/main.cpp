/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch

This is part one...*/

#include <iostream>
#include "list.h"
#include "lister.h"

using namespace std;

int main() {
  string poo = "";
  lister<string> lone;
  lone.insert();
  while (poo != "q") {
    lone.movtob();
    cout << "q to quit or anything to keep going: ";
    cin >> poo;
  }
}
