#include "list.h"

list::list(std::string datas):data(datas),next(NULL)
{}

ostream& operator<<(ostream os, const list& l)
{
	return os << c.data;
}