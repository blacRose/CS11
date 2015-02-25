#include <iostream>
#include "lister.h"
using namespace std;

lister::lister():head(NULL), size(0)
{
	
}
void lister::movtob()
{
	// precondition: list isn't empty
	if (!isempty())
	{
		list* curr = head;
		size_t tos = 9999999;
		while (tos > size)
		{
			cout << "Index: item" << endl;
			print();
			cout << "Index to move to start: ";
			cin >> tos;
			if (tos > size)
			{
				cout << "Please enter an actual index, yo." << endl;
			} else {
				if (tos == 0)
				{
					for (size_t moo; moo < tos; ++moo)
					{
						// step to the one to move.
						curr = curr->next;
					}
					// move curr to head
					curr->next = head;
					head = curr;
				}
			}
		}
	} else {
		cout << "Your list is empty." << endl;
	}
	// postcondition: this function removes the data item marked by a cursor from a linked list and reinserts the data item at the beginning of the list.
}
bool lister::isempty() const
{
	if (head == NULL)
	{
		return true;
	} else {
		return false;
	}
}
void lister::print() const
{
	list* tp = head;
	size_t i=0;
	while (tp != NULL)
	{
		cout << i << ": " << *tp << endl;
		tp = tp->next;
		++i;
	}
}
void lister::put(const std::string moose)
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
		if (curr == head)
		{
			ndats->next = head;
			head = ndats;
		} else {
			// insert after head (not empty)
			ndats->next = curr;
			trail->next = ndats;
		}
	}
	++size;
}