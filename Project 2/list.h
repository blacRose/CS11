#include <iostream>


#ifndef LIST_H_
#define LIST_H_
class list
{
public:
	friend std::ostream& operator<<(std::ostream, const list&);
	list(std::string datas = "");
	list* next;
	std::string data;
};
#endif