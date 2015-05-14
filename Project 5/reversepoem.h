template<class hithere> class reversePoem {};
template<> class reversePoem<char>
{
public:
  void input();
  void printPoem();
  void sortPoem();
private:
  queue<char> initialQ;
  queue<char> finalQ;
};

template<> class reversePoem<string>
{
public:
  void input();
  void printPoem();
  void sortPoem();
private:
  queue<string> initialQ;
  queue<string> finalQ;
};