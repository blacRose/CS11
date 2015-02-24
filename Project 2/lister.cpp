#include "lister.h"
using namespace std;

lister::lister():head(NULL), size(0)
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
void insert(const std::string moose)
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
			if (curr->data >= ndats->data)
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
		} else {
		// insert after head (not empty)
			ndats->next = curr;
			trail->next = ndats;
		}
	}
	size++;
}