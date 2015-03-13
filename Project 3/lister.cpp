#include <iostream>
#include "lister.h"

template <class T>
lister::lister() : head(NULL), size(0) {}
void lister::insert() {
  T ins = "";
  while (ins != "q") {
    cout << "q to end inserting, or object to add to keep going: ";
    cin >> ins;
    if (ins != "q" && ins != "Q")
      put_back(ins);
  }
}
void lister::movtob() {
  // precondition: list isn't empty
  if (!isempty()) {
    list<T>* curr = head;
    list<T>* prev;
    size_t tos = 9999999;
    while (tos > size) {
      cout << "Index: item" << endl;
      print();
      cout << "Index to move to start: ";
      cin >> tos;
      if (tos > size) {
        cout << "Please enter an actual index, yo." << endl;
      } else {
        if (tos == 0) {
          // move head to head? silly!
          cout << "Yeah. Item index 0 is already at the head, silly." << endl;
        } else {
          // it's an actual index.
          for (size_t moo = 0; moo < tos; ++moo) {
            // step to the one to move.
            prev = curr;
            curr = curr->next;
          }
          // move curr to head
          prev->next = curr->next;
          curr->next = head;
          head = curr;
        }
      }
    }
  } else {
    // derp
    cout << "Your list is empty." << endl;
  }
  // postcondition: this function removes the data item marked by a cursor from
  // a linked list and reinserts the data item at the beginning of the list.
}
bool lister::isempty() const {
  if (head == NULL) {
    return true;
  } else {
    return false;
  }
}
void lister::print() const {
  list<T>* tp = head;
  size_t i = 0;
  while (tp != NULL) {
    if (i == 99)
      break;
    cout << i << ": " << *tp << endl;
    tp = tp->next;
    ++i;
  }
}
void lister::put(const T instring) {
  list<T>* ndats = new list<T>(instring);
  // empty
  if (head == NULL) {
    // insert at head (empty)
    head = ndats;
  } else {
    list<T>* curr = head;
    list<T>* trail = NULL;

    // traverse list to find loc to ins
    while (curr != NULL) {
      if (curr->data >= ndats->data) {
        break;
      } else {
        trail = curr;
        curr = curr->next;
      }
    }
    // insert at head (not empty)
    if (curr == head) {
      ndats->next = head;
      head = ndats;
    } else {
      // insert after head (not empty)
      ndats->next = curr;
      trail->next = ndats;
    }
  }
  ++size;
}
void lister::put_back(T that) {
  if (!isempty()) {
    list<T>* last = last_element();
    last->next = new list<T>(that);
    ++size;
  } else {
    // empty list, need new item
    head = new list<T>(that);
  }
}
list<T>* lister::last_element() {
  list<T>* theend = head;
  while (theend->next != 0) {
    if (theend->next != 0)
      theend = theend->next;
  }
  return theend;
}