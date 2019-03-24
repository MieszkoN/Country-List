#include <iostream>
#include <string>
#include <cstring>
#include "country.h"

#ifndef COUNTRYLIST
#define COUNTRYLIST

using namespace std;

class CountryList {
		Country *head;
	public:
		CountryList();
		~CountryList();
		void addCountry(int k, const char *n, long p);
		void removeCountry(int k);
		void displayList();
};

#endif
