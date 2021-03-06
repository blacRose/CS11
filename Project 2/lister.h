#include <iostream>
#include "list.h"

// all this is from that video series or ©‎ 2015, Shelby Munsch.
// series:
// http://www.learnerstv.com/Free-Computer-Science-Video-lectures-ltv733-Page1.htm

class lister {
public:
  lister();
  void insert();
  bool isempty() const;
  void movtob();
  void print() const;
  void put(const std::string);
  list *end();
  void put_back(std::string);

private:
  list *head;
  size_t size;
};