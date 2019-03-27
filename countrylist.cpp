#include <iostream>
#include <cstring>
#include "countrylist.h"

using namespace std;

//constructor
CountryList::CountryList() {
	head = NULL;
}

//destructor
CountryList::~CountryList() {
	Country *temp = head;
	while (temp != NULL) {
		temp = temp->getNext();
		delete head;
		head = temp;
	}
	cout << "Linked list is empty" << endl;
}

//copy constructor
CountryList::CountryList(const CountryList &x) {
	//Country *temp = x.getHead();
	Country *temp = x.head;
	Country *ptr = head;
	
	while(ptr) {
		if(!ptr->getNext())
			break;
		ptr = ptr->getNext();
	}

	while(temp) {
		Country *add = new Country(temp->getKey(), temp->getName(), temp->getPopulation());
		add->setNext() = NULL;
		
		if(!head) {
			head = add;
		} else {
			ptr->setNext() = add;
		}
		ptr = add;
		temp = temp->getNext();
	}
}

//add Country to the list of the Countries
void CountryList::addCountry(int k, const char *n , long p) {
	Country *add = new Country(k, n, p);
	Country *temp = head;
	if (head == NULL) {
		head = add;
		head->setNext() = NULL;
		return;
	}
	
	while (temp != NULL) {
		if ((temp->getKey()) == k) {
			cout << "There is element with such key!" << endl;
			return;
		}
		temp = temp->getNext();
	}
	temp = head;
	Country *prev = NULL;
	while ((temp != NULL) && strcmp(temp->getName(), add->getName()) <= 0) {
		prev = temp;
		temp = temp->getNext();
	}
		if (prev != NULL) {
			add->setNext() = prev->getNext();
			prev->setNext() = add;
		} else {
			add->setNext() = head;
			head = add;
		}
}

//remove country from the list of the countries
void CountryList::removeCountry(int k) {
	Country *temp = head;
	Country *prev = temp;
	if (head->getKey() == k) {
		head = temp->getNext();
		delete temp;
	} else {
		while (temp != NULL) {
			if (temp->getKey() == k) {
				if (temp->getNext() == NULL)  {
					prev->setNext() = NULL;
					delete temp;
					return;
				} else {
					prev->setNext() = temp->getNext();
					delete temp;
					return;
				}
			}
			prev = temp;
			temp = temp->getNext();
		}
	}
}

//print all countries on the screen
void CountryList::displayList() {
	Country *ptr = head;
	if(ptr == NULL) {
		cout << "Linked list is empty" << endl;
	} else {
		while(ptr != NULL) {
  			cout << ptr->getKey() << " " <<  ptr->getName() << " " << ptr->getPopulation() << endl;
			ptr = ptr->getNext();
		}
	}
}

//assignment operator in order to copy linked list
CountryList& CountryList::operator=(const CountryList& x) {
	if(!head) {
		return *this;
	} else {
		cout << "Linked list is empty!"<< endl;
	}
}
