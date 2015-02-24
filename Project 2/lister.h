class lister
{
public:
	void addToHead(const std::string&);
	void addToTail(const std::string&);
	void addWhere(const std::string&, size_t);
	void sortAdd(const std::string&);
	void printList() const;
	std::string get(size_t);
private:
	list* head;
}