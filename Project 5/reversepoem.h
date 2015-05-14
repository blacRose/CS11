template<class Item> class reversePoem
{
public:
  void input()
  {
    char input[256];
    while (input != "")
    {
      cout << "Enter lines, or an empty line to quit" << endl;
      cin.getline(input, 256);
      if (input != "")
        break;
      if char, loop
        for (size_t i=0; i<256; i++)
      {
        initialQ.emplace(input[i]);
      }
      if string, insert
        initialQ.emplace((string)input);
    }
  }
  void printPoem()
  {
    std::cout << "Your initial poem…" << std::endl;
    while (!initialQ.empty()) {
      std::cout << initialQ.front() << std::endl;
      initialQ.pop();
    }
    std::cout << "Your final poem…" << std::endl;
    while (!finalQ.empty()) {
      std::cout << finalQ.front() << std::endl;
      finalQ.pop();
    }
  }
  void sortPoem() {
    queue<Item> tempQ = initialQ;
    while (!initialQ.empty()) {
      finalQ.emplace(tempQ.front());
      tempQ.pop();
    }
  }
private:
  queue<Item> initialQ;
  queue<Item> finalQ;
};
template<> class reversePoem<char>
{
public:
  void input()
  {
    char input[256];
    while (input != "")
    {
      cout << "Enter lines, or an empty line to quit" << endl;
      cin.getline(input, 256);
      if (input != "")
        break;
      for (size_t i=0; i<256; i++)
      {
        initialQ.emplace(input[i]);
      }
    }
  }
};

template<> class reversePoem<string>
{
  void input()
  {
    char input[256];
    while (input != "")
    {
      cout << "Enter lines, or an empty line to quit" << endl;
      cin.getline(input, 256);
      if (input != "")
        break;
      initialQ.emplace((string)input);
    }
  }
}