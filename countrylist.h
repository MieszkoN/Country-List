#include <iostream>
#include <cstring>
#include "country.h"

using namespace std;

class CountryList
{
		Country *head;
	public:
		CountryList();
		~CountryList();
		void addCountry(int k, const char* n, long p);
		void removeCountry(int k);
		void displayList();
		CountryList(const CountryList &x);
		CountryList& operator=(const CountryList& x);
};
