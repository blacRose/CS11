/*
* main.cpp
*
* MM, YUP!
* Author: Shelby Munsch

This is part one...*/

#include <iostream>
#include "list.h"
#include "lister.h"
template <class T>
lister<T>::lister() : head(NULL), size(0) {}
template <class T>
void lister<T>::insert() {
  T ins = "";
  while (ins != "q") {
    std::cout << "q to end inserting, or object to add to keep going: ";
    std::cin >> ins;
    if (ins != "q" && ins != "Q")
      put_back(ins);
  }
}
template <class T>
void lister<T>::movtob() {
  // precondition: list isn't empty
  if (!isempty()) {
    list<T>* curr = head;
    list<T>* prev;
    size_t tos = 9999999;
    while (tos > size) {
      std::cout << "Index: item" << std::endl;
      print();
      std::cout << "Index to move to start: ";
      std::cin >> tos;
      if (tos > size) {
        std::cout << "Please enter an actual index, yo." << std::endl;
      } else {
        if (tos == 0) {
          // move head to head? silly!
          std::cout << "Yeah. Item index 0 is already at the head, silly." << std::endl;
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
    std::cout << "Your list is empty." << std::endl;
  }
  // postcondition: this function removes the data item marked by a cursor from
  // a linked list and reinserts the data item at the beginning of the list.
}
template <class T>
bool lister<T>::isempty() const {
  if (head == NULL) {
    return true;
  } else {
    return false;
  }
}
template <class T>
void lister<T>::print() const {
  list<T>* tp = head;
  size_t i = 0;
  while (tp != NULL) {
    if (i == 99)
      break;
    std::cout << i << ": " << *tp << std::endl;
    tp = tp->next;
    ++i;
  }
}
template <class T>
void lister<T>::put(const T instring) {
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
template <class T>
void lister<T>::put_back(T that) {
  if (!isempty()) {
    list<T>* last = last_element();
    last->next = new list<T>(that);
    ++size;
  } else {
    // empty list, need new item
    head = new list<T>(that);
  }
}
template <class T>
list<T>* lister<T>::last_element() {
  list<T>* theend = head;
  while (theend->next != 0) {
    if (theend->next != 0)
      theend = theend->next;
  }
  return theend;
}

template <class T>
list<T>::list(T datas): data(datas), next(NULL) {};

std::ostream &operator<<(std::ostream &os, const list<std::string> &l) { return os << l.data; }

int main() {
  std::string poo = "";
  lister<std::string> lone;
  lone.insert();
  while (poo != "q") {
    lone.movtob();
    std::cout << "q to quit or anything to keep going: ";
    std::cin >> poo;
  }
}
