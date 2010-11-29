#ifndef CADENA_H
#define CADENA_H

#include <iostream>

using namespace std;

class MyString {

public:
	MyString();
	MyString(char st[]);
	MyString(const MyString&);
	~MyString();

	char getIthChar(unsigned int pos, bool& err) const;
	unsigned int getLength() const;
	unsigned int substring(const MyString& c) const;
	bool operator==(const MyString& c) const;
	MyString& operator=(const MyString& c);
	bool operator<=(const MyString& c) const;
	MyString& operator+(const MyString& c);
	void concat(char* c);
	void get(istream& c, char test);
	friend ostream& operator<< (ostream& c, const MyString& ca);

private:
	
	char* st;


};


#endif