#include <iostream>

#ifndef LIST_H_
#define LIST_H_
template<class T> class list {
public:
  friend std::ostream &operator<<(std::ostream &, const list<T> &);
  list(T);
  list<std::string>* next;
  T data;
};
#endif