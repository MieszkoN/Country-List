#include <iostream>
#include <string>
#include <cstring>
#include "country.h"

using namespace std;

Country::Country(int k, const char *n, long pop) {
	//int size = strlen(n);
	//name = new char[size+1];
	name = n;
	key = k;
	population = pop;
}

Country::~Country() {
	//delete []name;
	key = 0;
	name = NULL;
	population = 0;
} 


void Country::setKey(int k) {
	key = k;
}


void Country::setName(const char *n) {
	name = n;
}

void Country::setPopulation(long pop) {
	population = pop;
}

void Country::setNext(Country *ptr) {
	this->next = ptr;
}


int Country::getKey() {
	return key;
}


const char* Country::getName() {
	return name;
}


int Country::getPopulation() {
	return population;
}

Country *Country::getNext() {
	return this->next;
}

void Country::print() {
	cout << key << " " <<  name << " " << population << endl;
}
