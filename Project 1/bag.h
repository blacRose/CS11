class bag
{
public:
	void insert(std::string);
	void removes(std::string);
	size_t where(std::string) const;
	size_t whereo(std::string) const;
	void opens(std::string);
	bag whowhere(bag);
	std::string get(size_t) const;
	std::string geto(size_t) const;
	void put(std::string, size_t);
	void putback(std::string);
	void print(bag) const;
	void prints() const;
	void srm();
private:
	std::vector<std::string> data;
	std::vector<std::string> odata;
};
