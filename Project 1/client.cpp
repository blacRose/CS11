#include <iostream>
#include <vector>
#include "bag.h"

int main()
{
	//main is here
	bag weblog, pages, pop, iplist, linked;
	weblog.opens("weblog.txt");
	pages.opens("weblog_visitedpages_unique.txt");
	weblog.whowhere(pages, iplist, linked);
	 // weblog.prints();
	iplist.print(linked);
	// weblog.print(pop);
	
}

