template<class Item> class reversePoem
{
public:
  void input();
  template void sortPoem();
  void printPoem();
private:
  queue<char> initialQ;
  queue<char> finalQ;
};

template<> class reversePoem<char>
{
public:
  void input()
  {
    char input;
    cout << "Enter lines, or an empty line to quit" << endl;
    cin >> input;
    initialQ.emplace(input);
  }
  void sortPoem() {
    queue<char> tempQ = initialQ;
    while (!initialQ.empty()) {
      finalQ.emplace(tempQ.front());
      tempQ.pop();
    }
  }
  void printPoem() {
    std::cout << "Your poem" << std::endl;
    while (!finalQ.empty()) {
      std::cout << finalQ.front() << std::endl;
      finalQ.pop();
    }
  }
private:
  queue<char> initialQ;
  queue<char> finalQ;
};

template<> class reversePoem<std::string>
{
public:
  void input()
  {
    std::string input;
    cout << "Enter lines, or an empty line to quit" << endl;
    cin >> input;
    initialQ.emplace(input);
  }
  void sortPoem() {
    queue<std::string> tempQ = initialQ;
    while (!initialQ.empty()) {
      finalQ.emplace(tempQ.front());
      tempQ.pop();
    }
  }
  void printPoem() {
    std::cout << "Your poem" << std::endl;
    while (!finalQ.empty()) {
      std::cout << finalQ.front() << std::endl;
      finalQ.pop();
    }
  }
private:
  queue<std::string> initialQ;
  queue<std::string> finalQ;
};