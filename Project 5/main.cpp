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

template <class Item>
class reversePoem
{
public:
  void input();
  void sortPoem();
  friend std::ostream &operator<<(std::ostream &, const reversePoem &);
  void printPoem();
private:
  queue<Item> initialQ;
  queue<Item> finalQ;
};
template <class Item>
void reversePoem::sortPoem() {
  queue<Item> tempQ = initialQ;
  // Precondition: Two objects, initialQ and finalQ, of a queue class have been
  // filled with data.
  while (!initialQ.empty()) {
    finalQ.emplace(tempQ.front());
    tempQ.pop();
  }
  // Postcondition: The queue object initialQ has been loaded in reverse order
  // onto the end of the queue object finalQ. In other words, finalQ contains
  // its original data plus the reversed data from initialQ. The initialQ is
  // empty.
}
template <class Item>
ostream &reversePoem::operator>>(istream &eyes, const reversePoem &l)
{
  initialQ.emplace(eyes);
}
template <class Item>
void reversePoem::printPoem() {
  cout << "Your poem" << endl;
  while (!finalQ.empty()) {
    cout << finalQ.front() << endl;
    finalQ.pop();
  }
}
template <class Item>
void reversePoem::input()
{
  cout << "Enter lines, or an empty line to quit" << endl;
  cin >> initialQ;
}
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

