#include "reversepoem.h"

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