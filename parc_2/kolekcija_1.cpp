#include <iostream>
#include <string>

using namespace std;

int dbg(string f_name, string str) {
   cout << "----" << f_name << "----" << endl;
   cout << str << endl;
};



template<class T = int, int max = 10>
class Kolekcija {

private:
   T *item;
   int size;
   int capacity;

public:
   Kolekcija();
   ~Kolekcija();
   //void add_item();
   //void delete_item();

   // nije friend: ... !
   friend ostream & operator<< <> (ostream &o_s, const Kolekcija<T, max> &kol); 
};


//kolekcija_1.cpp:24: error: expected unqualified-id before ‘template’ 
// klasu zavrsiti sa ";"


//kolekcija_1.cpp:32: error: default template arguments may not be used in function templates without -std=c++0x or -std=gnu++0x

// defaultni template argumenti ne mogu biti koristeni kod implementacije!
template<class T, int max>
//error: ‘template<class T, int max> class Kolekcija’ used without template parameters 
// genericka klasa mora imati parametre kod svake definicije tipa !!! 
Kolekcija<T, max>::Kolekcija()
{
  dbg("kolekcija", "konstruktor");
  capacity = max;
  size = 0;
}

template<class T, int max>
Kolekcija<T, max>::~Kolekcija()
{
  dbg("kolekcija", "destruktor");

}

//kolekcija_1.cpp:20: error: expected primary-expression before ‘&’ token
//kolekcija_1.cpp:20: error: ‘operator<< <>’ cannot appear in a constant-expression

template<class T, int max>
ostream& operator<< (ostream &o_s, const Kolekcija<T, max> &kol) 
{
   dbg("friend kolekcija", "operator<<"); 
   for(int i=0; i < kol.size; i++) {
        o_s << kol[i];
   } 
   return o_s;
}

int main()
{
        dbg("main", "Hello world");
	return 0;
}
