#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>
#include <regex>
#include "bag.h"

void bag::opens(std::string infi)
{
	std::ifstream iflol;
	std::string temps;
	iflol.open(infi);
	while(getline(iflol, temps))
	{
		data.push_back(temps);
	}
	iflol.close();
}
void bag::removes(std::string strout)
{
	size_t find = where(strout);
	data.erase(data.begin()+find);
}
size_t bag::where(std::string whatstr) const
{
	size_t which = 9999;
	if (data.size() != 0)
	{
		for (size_t i=0; i <= data.size() - 1; i++)
		{
			if (data.at(i) == whatstr)
				which = i;
		}
	}
	return which;
}
void bag::whowhere(bag pages, bag & iplist, bag & linked)
{
	std::string pag, eyepee, strup;
	for (size_t i=0; i <= data.size() - 1; i++)
	{
		std::string ati = data.at(i);
		eyepee = ati.substr(0, ati.find(" "));
		pag = ati.substr(ati.find("T ")+2);
		pag = pag.substr(0, pag.find("HTTP/")-1);
		size_t where = (size_t)iplist.where(eyepee);
		std::string pon = std::to_string(pages.where(pag));
// 		if (i>0)
// 		{std::cout << eyepee << ": " << std::endl;
// 		linked.prints();}
		if (where == 9999)
		{
			// not in there yet.
			iplist.putback(eyepee);
			linked.putback(pon);
		}
		else
		{
			// it's in there.
			strup = linked.get(where) + " " + pon;
			linked.put(strup, where);
		}
	}
}
void bag::print(bag pag) const
{
	for (size_t i=0; i <= data.size() - 1; i++)
	{
		std::cout << data.at(i) << ": " << pag.get(i) << std::endl;
	}
}
void bag::prints() const
{
	for (size_t i=0; i <= data.size() - 1; i++)
	{
		std::cout << i << ": " << data.at(i) << std::endl;
	}
}
std::string bag::get(size_t whe) const
{
	return data.at(whe);
}
void bag::put(std::string thes, size_t whe)
{
	data.emplace(data.begin() + whe, thes);
	data.erase(data.begin() + whe + 1);
}
void bag::putback(std::string thes)
{
	data.emplace_back(thes);
}
void bag::srm()
{
	sort(data.begin(), data.end());
	data.erase(std::unique(data.begin(), data.end()), data.end());
}
/* for when I have a list of pages to deal with, store in a csv std::string in a vector with the same index as the IP.
#include <vector>
#include <std::string>
#include <sstream>


std::std::string str = "1,2,3,4,5,6";
std::vector<int> vect;

std::std::stringstream ss(str);

int i;

while (ss >> i)
{
vect.push_back(i);

if (ss.peek() == ',')
ss.ignore();
}*/
