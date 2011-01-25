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

   virtual ~KucniLjubimac() {
        dbg("kljub", "destruktor");
   }
};


class Pas: public KucniLjubimac {
public:
   void OglasiSe() { 
         dbg("pas", "pas oglasavanje"); 
   }

   ~Pas() {
        dbg("pas", "destruktor");
   }


};

class Macka: public KucniLjubimac {
public:
   void OglasiSe() { 
        dbg("macka", "MAC MAC oglasavanje");
   }

   void Predi() {
        dbg("macka", "ja znam i presti: PPPPPPPPPPprrrrrrrrrrrrrrrrr");

   }

   ~Macka() {
        dbg("macka", "destruktor");
   }

};

class Vucjak: public Pas {

public:
   void OglasiSe() { 
        dbg("vucjak", "ja sam vucjak");
   }

   ~Vucjak() {
        dbg("vucjak", "destruktor");
   }


};



int f_1 (KucniLjubimac &klj) {

   klj.OglasiSe();

   Macka *m;
   m = dynamic_cast<Macka *>(&klj);
   if (m != NULL) {
       m->Predi();

   }
}

int main() {
   
   Pas k1;

   k1.OglasiSe();

   Macka *m1 = new Macka();

   f_1(*m1);


   Vucjak *v1 = new Vucjak();

   f_1(*v1);

   delete m1;
 
   delete v1;
 
   return 0;
}





