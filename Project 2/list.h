#include <iostream>
using namespace std;

class list
{
public:
	ostream& operator<<(ostream, const list&);
	list(string datas = "");
	list* next;
private:
	string data;
};