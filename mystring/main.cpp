#include <iostream>
using namespace std;

#include "my_string.h"

int main() {

	MyString ss1("klakla");

	MyString ss2;
	ss2.get(cin, '\n');

	MyString ss3;

	ss3 = ss1 + ss2;

	MyString ss4(ss3);

	MyString ss5 = ss4 + MyString("kraj");

	cout << "ss1=" << ss1 << endl;
	cout << "ss2=" << ss2 << endl;
	cout << "ss3=" << ss3 << endl;
	cout << "ss4=" << ss4 << endl;
	cout << "ss5=" << ss5 << endl;

	system("pause");

	return 0;
}