template<class Item> class reversePoem
{
public:
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
    queue<char> tempQ = initialQ;
    while (!initialQ.empty()) {
      finalQ.emplace(tempQ.front());
      tempQ.pop();
    }
  }
  void input()
  {
    char input[512] = "";
    while (!strcmp(input,""))
    {
      cout << "Enter lines, or an empty line to quit" << endl;
      cin.getline(input, 512);
      if (!strcmp(input,""))
        break;
      for (size_t i=0; i<512; i++)
      {
        if (input[i]=='\0')
          break;
        initialQ.emplace(input[i]);
      }
      if (!strcmp(input,""))
        break;
    }
  }
private:
  queue<char> initialQ;
  queue<char> finalQ;
};

template<> class reversePoem<string>
{
public:
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
    queue<string> tempQ = initialQ;
    while (!initialQ.empty()) {
      finalQ.emplace(tempQ.front());
      tempQ.pop();
    }
  }
  void input()
  {
    char input[512] = "";
    while (!strcmp(input,""))
    {
      cout << "Enter lines, or an empty line to quit" << endl;
      cin.getline(input, 512);
      if (!strcmp(input,""))
        break;
      initialQ.emplace((string)input);
    }
  }
private:
  queue<string> initialQ;
  queue<string> finalQ;
};