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

template <class Item> void reversePoem(queue<Item>, queue<Item> &);
void input(queue<char> &, queue<char> &);
void input(queue<string> &, queue<string> &);
template <class Item> void printPoem(queue<Item>);

int main() {
  char type;
  cout << "String (enter s), or char (c)?" << endl;
  cin >> type;
  if (type == 'c') {
    queue<char> initialQ, finalQ;
  } else if (type == 's') {
    queue<string> initialQ, finalQ;
  }
    input(initialQ, finalQ);
    reversePoem(initialQ, finalQ);
    printPoem(finalQ);
}

template <class Item>
void reversePoem(queue<Item> initialQ, queue<Item> &finalQ) {
  queue<Item> tempQ = initialQ;
  // Precondition: Two objects, initialQ and finalQ, of a queue class have been
  // filled with data.
  while (!initialQ.empty()) {
    finalQ.emplace(initialQ.front());
    tempQ.pop();
  }
  // Postcondition: The queue object initialQ has been loaded in reverse order
  // onto the end of the queue object finalQ. In other words, finalQ contains
  // its original data plus the reversed data from initialQ. The initialQ is
  // empty.
}
template <class Item>
void printPoem(queue<Item> finalQ) {
  cout << "Your poem" << endl;
  while (!finalQ.empty()) {
    cout << finalQ.front() << endl;
    finalQ.pop();
  }
}
void input(queue<char> &initialQ, queue<char> &finalQ)
{
  cout << "Enter lines, or an empty line to quit" << endl;
  get(inputs, initialQ, finalQ);
  char inputs;
  int poo;
  while (1)
  {
    cin.get(inputs);
    if (inputs != '\n') {
      initialQ.emplace(inputs);
      finalQ.emplace(inputs);
      poo = 0;
    } else if (inputs == '\n' && poo != 1) {
      poo++;
    } else if (inputs == '\n' && poo == 1) {
      break;
    }
  }
}
void input(queue<string> &initialQ, queue<string> &finalQ)
{
  string inputs;
  cout << "Enter lines, or an empty line to quit" << endl;
  while (!cin.eof())
  {
    cin.getline(inputs);
    initialQ.emplace(inputs);
    finalQ.emplace(inputs);
  }
}