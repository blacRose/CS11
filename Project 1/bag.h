// bag class declaration!

class bag {
public:
  void opens(std::string);
  size_t where(std::string) const;
  void whowhere(bag, bag &, bag &);
  void print(bag) const;
  std::string get(size_t) const;
  void putback(std::string);
  void put(std::string, size_t);
private:
  std::vector<std::string> data;
};
