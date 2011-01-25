#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

// strlen
#include <string.h>

#define DEBUG 1


using namespace std;

int dbg(string f_name, string str) {

#ifdef DEBUG
   cout << "----" << f_name << " / " << str << endl;
#endif

};

class KucniLjubimac {
public:
   virtual void OglasiSe() = 0;
};


class Pas: public KucniLjubimac {
public:
   void OglasiSe() { 
         dbg("pas", "pas oglasavanje"); 
   }

};

class Macka: public KucniLjubimac {
public:
   void OglasiSe() { 
        dbg("macka", "MAC MAC oglasavanje");
   }

};

class Vucjak: public Pas {
   void OglasiSe() { 
        dbg("vucjak", "ja sam vucjak");
   }

};



int f_1 (KucniLjubimac &klj) {

   klj.OglasiSe();
}

int main() {
   
   Pas k1;

   k1.OglasiSe();

   Macka *m1 = new Macka();

   f_1(*m1);


   Vucjak *v1 = new Vucjak();

   f_1(*v1); 
   return 0;
}





