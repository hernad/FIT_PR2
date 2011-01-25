#include <iostream>
#include <string>

using namespace std;

template<class T = int, int max>
class Kolekcija {

private:
   T *item;
   int item;
   int size;
   int capacity;

public:
   Kolekcija();
   ~Kolekcija();
   add_item();
   
friend:
    ostream& operator<< <> (ostream &o_str, const Kolekcija<T, m> &kol); 
}

template<class T = int, int max = 10>
Kolekcija::Kolekcija()
{
  dbg("kolekcija", "konstruktor");
  capacity = m;
  size = 0;
}

template<class T = int, int max>
Kolekcija::~Kolekcija()
{
  dbg("kolekcija", "destruktor");

}

template<class T = int, int max>
ostream& operator<< <> (ostream &o_str, const Kolekcija<T, m> &kol); 
{
   dbg("friend kolekcija", "operator<<"); 
   for(int i=0; i<size; i++) {
        o_str << kol[i];
   } 
   return o_str;
}

int dbg(string f_name, string str) {
   cout << "----" << f_name << "----" << endl;
   cout << str << endl;
}

int main()
{
        dbg("main", "Hello world");
	return 0;
}
