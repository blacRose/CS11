template <class Item>
class reversePoem
{
public:
  void input();
  void sortPoem();
  friend std::ostream &operator<<(std::ostream &, const reversePoem &);
  void printPoem();
private:
  queue<Item> initialQ;
  queue<Item> finalQ;
};