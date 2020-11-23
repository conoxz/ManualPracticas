#include <iostream>
#include <fstream>
using namespace std;
/* 
Veamos otro ejemplo sencillo, para ilustrar algunas limitaciones del operador >> para hacer lecturas, cuando no queremos perder caracteres.
Supongamos que llamamos a este programa "streams.cpp", y que pretendemos que se autoimprima en pantalla:
El programa tendra como salida el codigo del mismo 
From: http://c.conclase.net/curso/?cap=039
*/
int main() {
   char cadena[128];
   ifstream fe("tream.cpp");

   while(!fe.eof()) {
      fe >> cadena;
      cout << cadena << endl;
   }
   fe.close();

   return 0;
}
