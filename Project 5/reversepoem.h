template<class hithere> class reversePoem {};
template<> class reversePoem<char>
{
public:
  void input();
  void printPoem();
private:
  deque<char> initialQ;
  deque<char> finalQ;
};

template<> class reversePoem<string>
{
public:
  void input();
  void printPoem();
private:
  deque<string> initialQ;
  deque<string> finalQ;
};