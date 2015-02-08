#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>
#include <regex>
#include "bag.h"

void bag::insert(std::string meow)
{
	data.push_back(meow);
}
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
	size_t which = 0;
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
size_t bag::whereo(std::string whatstr) const
{
	size_t which = 9999;
	if (odata.size() != 0)
	{
		for (size_t i=0; i <= odata.size() - 1; i++)
		{
			if (odata.at(i) == whatstr)
				which = i;
		}
	}
	return which;
}
bag bag::whowhere(bag needle)
{
	std::string pag, eyepee, strup;
	for (size_t i=0; i <= data.size() - 1; i++)
	{
		std::string ati = data.at(i);
		eyepee = ati.substr(0, ati.find(" "));
		pag = ati.substr(ati.find("GET ")+4);
		pag = pag.substr(0, pag.find("HTTP/") - 1);
		size_t whe = (size_t)whereo(eyepee);
		if (whe >= 9999)
		{
			// not in there yet
			puto(eyepee, 9999);
			needle.puto(std::to_string(needle.where(pag)), 9999);
		}
		else
		{
			strup.clear();
			// it's in there.
			strup = needle.geto(whe) + " " + std::to_string(needle.where(pag));
			needle.puto(strup, whe);
		}
	}
	return needle;
}
void bag::print(bag pag) const
{
	for (size_t i=0; i <= odata.size() - 1; i++)
	{
		std::cout << odata.at(i) << " " << pag.geto(i) << std::endl;
	}
}
void bag::prints() const
{
	for (size_t i=0; i <= odata.size() - 1; i++)
	{
		std::cout << odata.at(i) << std::endl;
	}
}
std::string bag::oshow(size_t wat) const
{
	return odata.at(wat);
}
std::string bag::get(size_t whe) const
{
	return data.at(whe);
}
std::string bag::geto(size_t whe) const
{
	return odata.at(whe);
}
void bag::put(std::string thes, size_t whe)
{
	if (whe <= 9998)
	{
		data.insert(data.begin() + whe, thes);
	} else {
		data.push_back(thes);
	}
}
void bag::puto(std::string thes, size_t whe)
{
	if (whe <= 9998)
	{
		odata.insert(odata.begin() + whe, thes);
	} else {
		odata.push_back(thes);
	}
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
