#include "list.h"
using namespace std;

list::list(string datas):data(datas),next(NULL)
{}

ostream& list::operator<<(ostream os, const list& l)
{
	return os << l.data;
}