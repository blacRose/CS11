#include <iostream>

class list
{
public:
	std::ostream& operator<<(std::ostream, const list&);
	list(std::string datas = "");
	list* next;
	std::string data;
};