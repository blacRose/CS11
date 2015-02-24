#include <iostream>
#include "list.h"

class lister
{
public:
	lister();
	void print() const;
	void put(const std::string);
private:
	list* head;
	size_t size;
};