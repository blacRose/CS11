/*
 * main.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: Shelby Munsch
 */


#include <iostream>
#include "list.h"
#include "lister.h"

using namespace std;
int main()
{
	string inp;
	lister lone;
	do {
		cout << "GET INPUT" << endl;
		cin >> inp;
		lone.put(inp);
	} while (inp != "q");
	lone.print();
}
