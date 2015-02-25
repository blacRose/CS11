#include <iostream>
#include "list.h"

class lister
{
public:
	lister();
	bool isempty() const;
	void movtob();
	void print() const;
	void put(const std::string);
private:
	list* head;
	size_t size;
};