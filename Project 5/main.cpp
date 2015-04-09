/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch
*/

#include <iostream>
using namespace std;

template<class Item>
void reversePoem(queue<Item>, queue<Item> &);
template<class Item>
void input(queue<Item> &, queue<Item> &);
template<class Item>
void printPoem(queue<Item> &);

int main() {
  cout << "String (enter s), or char (c)?" << endl;
  cin >> type;
  if (type == 'c')
  {
    queue<char> initialQ, finalQ;
    input<char>(initialQ, finalQ);
    reversePoem<char>(initialQ, finalQ);
    printPoem<char>(finalQ);
  } else if (type == 's') {
    queue<string> initialQ, finalQ;
    input<string>(initialQ, finalQ);
    reversePoem<string>(initialQ, finalQ);
    printPoem<string>(finalQ);
  }
}

template<class Item>
void reversePoem(queue<Item> initialQ, queue<Item> &finalQ){
  queue<Item> tempQ = initialQ;
  // Precondition: Two objects, initialQ and finalQ, of a queue class have been filled with data.
  while (!initialQ.empty())
  {
    finalQ.emplace(initialQ.front());
    tempQ.pop();
  }
  // Postcondition: The queue object initialQ has been loaded in reverse order onto the end of the queue object finalQ. In other words, finalQ contains its original data plus the reversed data from initialQ. The initialQ is empty.
}
template<class Item>
void printPoem(queue<Item> finalQ){
  cout << "Your poem"
  while (!finalQ.empty())
  {
    cout << finalQ.front() << endl;
    finalQ.pop();
  }
}
template<class Item>
void input(queue<Item> &initialQ, queue<Item> &finalQ){
  Item inputs;
  while (inputs != "" && inputs != '')
  {
    cout << "Enter lines, or an empty line to quit" << endl;
    cin >> inputs;
    if (inputs != "" && inputs != '')
    {
      initialQ.emplace(inputs);
      finalQ.emplace(inputs);
    }
  }
}