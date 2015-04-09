class boundedstack
{
public:
  void push(std::string);
  std::string pop();
  void read(std::string);
};
class boundedstacka : public boundedstack {
private:
  std::string data[50];
  size_t size;
};
class boundedstackb : public boundedstack {
private:
  std::string data[50];
  size_t size;
  size_t top;
};