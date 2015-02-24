#include <iostream>
#include "list.h"

__IFNDEF
class lister
{
public:
	lister();
	void printList() const;
	void insert(const std::string);
	std::string get(size_t);
private:
	list* head;
	size_t size;
};