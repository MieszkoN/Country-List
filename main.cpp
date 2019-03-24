#include <iostream>
#include <string>
#include <cstring>
#include "countrylist.h"
#include "country.h"

using namespace std;

int main() {
	Country *c1 = new Country(2, "Brazil", 207679000);
	c1->print();
	
	cout << endl;
	CountryList *list = new CountryList;
	list->displayList();  //no element in the list
	list->addCountry(2, "Uruguay", 3360148);
	list->addCountry(4, "Zimbabwe", 14877000);
	list->addCountry(1, "Poland", 38413000);
	list->addCountry(3, "Germany", 82887000);
	list->addCountry(5, "Argentina", 44082000);
	list->displayList();
	cout << endl;
	list->addCountry(2, "Brazil", 207679000); //same key as Uruguay
	list->displayList();
	list->removeCountry(3);
	list->removeCountry(2);
	cout << endl;
	list->displayList();
	cout << endl;
	list->removeCountry(6); //no element with such a key
	delete list;
	list->displayList();
	delete c1;
	return 0;
}
