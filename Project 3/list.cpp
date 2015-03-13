#include <iostream>
#include "list.h"
using namespace std;

template <class T>
list(T datas) : data(datas), next(NULL) {};

ostream &operator<<(ostream &os, const list<std::string> &l) { return os << l.data; }