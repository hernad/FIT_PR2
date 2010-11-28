#include <iostream>
#include <stdlib.h>

using namespace std;

class MyClass {

public:
    MyClass(int i) {
         cout << "constructor" << endl;
         a = i;
    }
    MyClass(const MyClass& my_in) {


       cout << "copy constructor se desava" << endl;
       a = my_in.a * 2;
    }

    MyClass& operator= (const MyClass&);
    void setA(const int);
    int getA() const {
       return a;
    }
    void print() const;

private:
    int a;

};

MyClass& MyClass::operator= (const MyClass& my_in) {

  cout << "member func operator=" << my_in.getA() << endl;
  this->a = my_in.a; 
  return *this;

}

void MyClass::setA(const int i1) {

  cout << "setA" << endl;
  this->a = i1;
}

void MyClass::print() const{

  cout << "print a=" << this->a << endl;
}


int main()
{
	MyClass m1(-1);


        m1.setA(100);
        // copy constructor 
        MyClass m2 = MyClass(m1);

         
        MyClass m3 = m2;
        MyClass m4(0);
        m4.operator=(m3);


        cout << "m1:";
        m1.print();
        cout << "m2:";
        m2.print();
        cout << "m3:";
        m3.print();

        cout << "m4:";
        m4.print();


	return 0;
}
