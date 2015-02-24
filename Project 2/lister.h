class lister
{
public:
	void addToHead(std::string);
	void addToTail(std::string);
	void addWhere(std::string, size_t);
	void sortAdd(std::string);
	void printList() const;
	std::string get(size_t);
private:
	list* head;
}