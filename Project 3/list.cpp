#include <iostream>
#include "list.h"
using namespace std;

ostream &operator<<(ostream &os, const list &l) { return os << l.data; }