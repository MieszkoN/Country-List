#include <iostream>
#include <string>
#include <cstring>
#include "countrylist.h"
#include "country.h"

using namespace std;

CountryList::CountryList() {
	head = NULL;
}

CountryList::~CountryList() {
	Country *temp = head;
	while(temp) {
		temp = temp->next;
		//temp = temp->getNext();
		//temp->setNext(temp->getNext());
		delete head;
		head = temp;
	}
}

void CountryList::addCountry(int k, const char *n, long pop)
{
    Country *add = new Country(k, n, pop);
    Country *temp = head;
    add->setKey(k);
    add->setName(n);
    add->setPopulation(pop);
    temp = head;
    if(temp == NULL) {
		head = add;
		return;
	}
	
	while (temp != NULL) {
        if (temp->getKey() == k) {
            cout << "There is an element with such key!" << endl;
            return;
        }
        temp = temp->getNext();
        //temp = temp->next;
        //temp->setNext(temp->getNext());
    }
    Country *prev = NULL;
	while((temp != NULL) && strcmp(temp->getName(), add->getName()) < 0) {
		prev = temp;
		temp = temp->getNext();
		//temp = temp->next;
		//temp->setNext(temp->getNext());
	}
	
    if(prev != NULL) {
		Country *temp1;
		add->next = prev->next;
		prev->next = add;
		//temp1 = add->getNext();
		//temp1 = prev->getNext();
		//temp1 = add;
		//prev->getNext() = add;
		//add->getNext() = prev->getNext();
		//prev->getNext() = add;
		//add->setNext(prev->getNext());
		//prev->setNext(add);
	} else 	{
		Country *temp2;
		//temp2 = add->getNext();
		add->next = head;
		//add->getNext() = head;
		//add->setNext(head);
		head = add;
	}
}

void CountryList::removeCountry(int k) {
    Country *temp = head;  
    Country *prev = temp; 
    if(head == NULL) {
        cout << endl << "List is empty" << endl;
    } else if (head->getKey() == k) {
        head = temp->getNext();
        delete temp;
    } else  {
        while (temp != NULL) {
            if (temp->getKey() == k) {
                if (temp->getNext() == NULL) {   // tu było 0
                    prev->next = NULL;
                    //prev->getNext() = NULL;      // tu było 0
                    delete temp;
                    return;
                } else {
					prev->next = temp->next;
                    //prev->getNext() = temp->getNext();
                    delete temp;
                    return;
                }
            }
            prev = temp;
            temp = temp->getNext();
        }
    }
}

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
