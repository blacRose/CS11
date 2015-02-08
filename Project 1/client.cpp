#include <iostream>
#include <vector>
#include "bag.h"

int main()
{
	//main is here
	bag weblog, pages, pop;
	weblog.opens("weblog.txt");
	pages.opens("weblog_visitedpages_unique.txt");
	pop = weblog.whowhere(pages);
	weblog.print(pop);
}

