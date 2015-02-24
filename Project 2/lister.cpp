#include "lister.h"
#include "list.h"
#include <iostream>
using namespace std;

lister::lister():head(NULL), size(0)
{
	
}
void lister::addToHead(const string& datas)
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
void lister::addToTail(const string&)
{
	
}
void lister::addWhere(const string&, size_t)
{
	
}
void lister::sortAdd(const string&)
{
	
}
void lister::printList() const
{
	list* tp = head;
	while (tp != NULL)
	{
		cout << tp << endl;
	}
}
string lister::get(size_t)
{
	
}
void insert(const std::string moose, const std::string after)
{
	list* ndats = new list(moose);
	//empty
	if (head == NULL)
	{
		//insert at head (empty)
		head = ndats;
	} else {
		list* curr = head;
		list* trail = NULL;
		
		//traverse list to find loc to ins
		while (curr != NULL)
		{
			if (curr->data >= newNode->data)
			{
				break;
			} else {
				trail = curr;
				curr = curr->next;
			}
		}
		//insert at head (not empty)
		if (curr = head)
		{
			ndats->next = head;
			head = ndats;
		}
		// insert after head
	}