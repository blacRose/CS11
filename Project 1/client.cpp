#include <iostream>
#include <vector>
#include "bag.h"

// What is meant by this?: Also, please indicate what you did, if anything for the extra 2 ...

int main() {
  // main is here, if you don't see that!
  bag weblog, pages, iplist, linked;
  weblog.opens("weblog.txt");
  pages.opens("weblog_visitedpages_unique.txt");
  weblog.whowhere(pages, iplist, linked);
  iplist.print(linked);
}
