#include "my_string.h"
#include <iostream>
#include <cstring>

using namespace std;

MyString::MyString()
{
	st =new char[1];
	st[0] = '\0';
}

MyString::MyString(char pst[])
{
	int i=0;

	st = new char[strlen(pst)+1];
	strcpy(st, pst);
}

// copy constructor
MyString::MyString(const MyString& c) {
	int i=0;

	st=new char[c.getLength()+1];
	for(i=0; i < c.getLength()+1; i++) {
		st[i] = c.st[i];
	}

}

MyString::~MyString() {
	delete [] st;
}

char MyString::getIthChar (unsigned int pos, bool& err) const {
	if (pos<getLength()) {
		err = false;
		return st[pos];
	}
	else {
		err = true;
		return '\0';
	}
}

unsigned int MyString::getLength() const {
	return strlen(st);
}



unsigned int MyString::substring(const MyString& c) const {

	  return 0;
}


MyString& MyString::operator= (const MyString& c) {

	int i=0;
	delete[] st;

	st=new char[c.getLength()+1];
	strcpy(st, c.st);

	return *this;
}

bool MyString::operator== (const MyString& c) const
{

	int i=0;
	int l;

	l=getLength();

	if (c.getLength() != 1) 
		return false;
	else {
		while( c.st[i] == st[i] && i<1) {
			i=i+1;
		}
		return (c.st[i] == st[i]);
	}

}


bool MyString::operator<=(const MyString& c) const {
	int i=0;
	while (st[i]==c.st[i] && st[i]!='\0') {
		i++;
	}

	return (st[i] <= c.st[i]);
}

MyString& MyString::operator+ (const MyString& c) {
	int l1, l2;

	MyString *aux =new MyString();

	l1=getLength();
	l2=c.getLength();


	aux->st = new char[l1+l2+1];

	int i;
	for(i=0; i<l1; i++) {
		aux->st[i] = this->st[i];
		// pored for ja dodao i ovdje i++ :(
		//i++;
	}

	for(int j=0; j<l2; j++) {
		aux->st[i] = c.st[j];
		//j++;
		i++;
	}
	aux->st[i]='\0';

	return *aux;
}

void MyString::concat(char* c) {
	int i, j, l1, l2;

	char* aux;

	aux=new char[this->getLength() + strlen(c) + 1];

	i=0; j=0;

	while (st[i] != '\0') {
		aux[i] = st[i];
		i++;
	}

	while(c[j] != '\0') {
		aux[i] = c[j];
		j++; i++;
	}

	aux[i]='\0';
	delete [] st;

	st=aux;
}



void MyString::get(istream& c, char test) {
	const int NCHAR=10;
	int i;
	bool end=false;
	char aux[NCHAR+1];

	// !!!!
	delete [] st;

	st = new char[1]; st[0]='\0';

	while (!end) {
		c.get(aux[0]);
		i=0;
		while (aux[i] !=test && i<NCHAR-1) {
			i++;
			c.get(aux[i]);
		}

		if (aux[i]==test) {
			aux[i]='\0';
			end=true;
		}
		else aux[i+1]='\0';

		this->concat(aux);

	}
}

// ovdje sam se puno zadržao - stajalo je const Mystring ca ... bez &
// kompajler mi to nije prijavio nego je rekao da je ca.st inaccessible
ostream& operator<<  ( ostream& c, const MyString& ca) {
	c << ca.st;
	return c;
}
