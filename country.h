#include <iostream>
#include <string>
#include <cstring>

#ifndef COUNTRY
#define COUNTRY

using namespace std;

class Country {
		int key;
		const char *name;
		long population;
		Country *next;
	public:
		Country(int key, const char *name, long population);
		~Country();
		void setKey(int k);
		void setName(const char *n);
		void setPopulation(long pop);
		void setNext(Country *ptr);
		int getKey();
		const char* getName();
		int getPopulation();
		Country *getNext();
		void print();
		friend class CountryList;
};

#endif
