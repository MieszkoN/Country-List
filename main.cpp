#include <iostream>
#include <cstring>
#include "countrylist.h"

using namespace std;

int main()
{
	/*
	CountryList list1;
	list1.addCountry(6, "Belgium", 11303528);
	list1.addCountry(2, "Uruguay", 3360148);
	list1.addCountry(4, "Zimbabwe", 14877000);
	list1.addCountry(1, "Poland", 38413000);
	list1.addCountry(3, "Germany", 82887000);
	list1.addCountry(5, "Argentina", 44082000);
	list1.addCountry(3, "Sweden", 9995000); // there is element with such key
	list1.displayList();
	cout<<endl;
    list1.removeCountry(5);
    list1.removeCountry(4);
	list1.displayList();
	*/
	cout << endl << endl << endl;
	
	
	CountryList *list2 = new CountryList;
	list2->displayList();  //no element in the list
	list2->addCountry(6, "Belgium", 11303528);
	list2->addCountry(2, "Uruguay", 3360148);
	list2->addCountry(4, "Zimbabwe", 14877000);
	list2->addCountry(1, "Poland", 38413000);
	list2->addCountry(3, "Germany", 82887000);
	list2->addCountry(5, "Argentina", 44082000);
	list2->displayList();
	cout << endl;
	list2->addCountry(2, "Brazil", 207679000); //same key as Uruguay
	list2->displayList();
	list2->removeCountry(10); //no element with such a key
	list2->removeCountry(5);
	list2->removeCountry(3);
	cout << endl;
	list2->displayList();
	cout << endl;
	
	cout << endl << endl << "Copied linked list" << endl;
	CountryList *l1 = list2;
	l1->displayList();	
	
	delete list2;
	
	//l1->displayList();
	return 0;
}
