#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int dbg(string f_name, string str) {
   cout << "----" << f_name << " / " << str << endl;
};


template<class T = int, int max = 10>
class Kolekcija {

private:
   // pokazivac na iteme
   T *items;
   int size;
   int capacity;

public:
   Kolekcija();
   ~Kolekcija();
   T& operator[]  (int i);
   void add_item  (const T &item);
   void operator+=  (const T &item);
   //void delete_item();

   // nije friend: ... !

   //kolekcija_1.cpp:29: warning: friend declaration ‘std::ostream& operator<<(std::ostream&, const Kolekcija<T, max>&)’ declares a non-template function
   //kolekcija_1.cpp:29: note: (if this is not what you intended, make sure the function template has already been declared and add <> after the function name here)

   //http://bytes.com/topic/c/answers/63145-friend-template-function
   template<class T2, int max2>
   friend ostream & operator<<(ostream &, const Kolekcija<T2, max2> &); 
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
  items = new T[capacity];
}

// specijalizacija template-a
//kolekcija_1.cpp:60: error: invalid use of incomplete type ‘class Kolekcija<int, max>’

/*
http://stackoverflow.com/questions/652155/invalid-use-of-incomplete-type

template<int m2>
Kolekcija<int, m2>::Kolekcija()
{
  dbg("kolekcija int", "konstruktor");
  capacity = max;
  size = 0;
  items = new int[capacity];

  for (int i=0; i<capacity; i++)
    items[i] = 111;
}

*/


template<class T, int max>
Kolekcija<T, max>::~Kolekcija()
{
  dbg("kolekcija", "destruktor");

  delete [] items;
  items = NULL;
}

template<class T, int max>
T &Kolekcija<T, max>::operator[] (int i)
{
   stringstream s1;
   s1 << i;
   dbg("kolekcija", "[" + s1.str() + "]");
   return this->items[i];
}

//kolekcija_1.cpp:20: error: expected primary-expression before ‘&’ token
//kolekcija_1.cpp:20: error: ‘operator<< <>’ cannot appear in a constant-expression

//http://stackoverflow.com/questions/3796558/difference-between-template-name-and-template-id

template<class T, int max>
ostream& operator<<(ostream &o_s, const Kolekcija<T,max> &kol) 
{
   dbg("friend kolekcija", "operator<< - ispis kolekcije"); 
   for(int i=0; i < kol.size; i++) {
        o_s << i << " : " << kol.items[i] << endl;
   } 
   return o_s;
}


template<class T, int max>
void Kolekcija<T, max>::add_item(const T &item)
{
  dbg("kolekcija", "add_item");
 
  if (capacity == size) {
     // prosiri kapacitet
     capacity += 5;
     T *temp = new T[capacity];
     dbg("kolekcija", "prosirujem capacity +5");
     // napuni temp sa items
     for(int i=0; i<size; i++)
       temp[i] = items[i];

     delete[] items;
     items = temp;
     // ponovo imamo dovoljno prostora
  }
 
  this->items[size++] = item;
  return;
}

template<class T, int max>
void Kolekcija<T, max>::operator+=(const T &item)
{
  dbg("kolekcija", "operat +=");
  
  return this->add_item(item);
}

int main()
{
        dbg("main", "Hello world");

        Kolekcija<int, 10> k1;

         
        cout << k1;
        k1.add_item(99);
        k1 += 101;
        cout << k1[0] << endl;
        cout << k1[1] << endl;

        for(int i=0; i<20; i++)
           k1 += i+1;

        cout << k1;
	return 0;
}
