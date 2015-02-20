class list
{
public:
	void addToHead(std::string);
	void addToTail(std::string);
	void addWhere(std::string, size_t);
	std::string get(size_t);
private:
	std::string data;
	list* next;
}