class bag
{
public:
	void removes(std::string);
	size_t where(std::string) const;
	void opens(std::string);
	void whowhere(bag, bag&, bag&);
	std::string get(size_t) const;
	void put(std::string, size_t);
	void putback(std::string);
	void print(bag) const;
	void srm(); // sort and unique, but not using.
private:
	std::vector<std::string> data;
	std::vector<std::string> odata;
};
