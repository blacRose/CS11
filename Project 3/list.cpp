#include <iostream>
#include "list.h"

template <class T>
list<T>::list(T datas): data(datas), next(NULL) {};

std::ostream &operator<<(std::ostream &os, const list<std::string> &l) { return os << l.data; }