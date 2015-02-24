#include "lister.h"
#include "list.h"

lister::lister():head(NULL), size(0);
void lister::addToHead(const std::string& datas)
{
	list* ndats = new list(datas);
	if (head == 0)
	{
		head = ndats;
	} else {
		ndats->next = head;
		head = ndats;
	}
}
void lister::addToTail(const std::string&)
{
	
}
void lister::addWhere(const std::string&, size_t)
{
	
}
void lister::sortAdd(const std::string&)
{
	
}
void lister::printList() const
{
	
}
std::string lister::get(size_t)
{
	
}