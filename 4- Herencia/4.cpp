#include <iostream>
using namespace std;
/* 
omo adición a especificar el estado protegido para los miembros de una clase, la palabra clave 'protected'
 tambien puede ser usada para heredar una clase base. Cuando una clase base es heredada como protected, 
 todos los miembros publicos y protegidos de la clase base se convierten en miembros protegidos de la 
 clase derivada. Aqui hay un ejemplo:
*/
class base {
 int i;

protected:
 int j;

public:
 int k;
 void seti(int a) { i = a; }
 int geti() { return i; }
};

// heredar 'base' como protected.
class derivada : protected base {

public:
 void setj(int a) { j = a; }; // j es protected aqui.
 void setk(int a) { k = a; }; // k es tambien protected. 
 int getj() { return j; }
 int getk() { return k; }
};

int main()
{
  derivada obj;

  /* La proxima linea es ilegal porque seti() es
     un miembro protegido de derivada, lo cual lo
     hace inaccesible fuera de derivada. */
  // obj.seti(10);

  // cout << obj.geti(); // ilegal -- geti() es protected.
  // obj.k = 10;  // tambien ilegal porque k es protected.

    // estas declaraciones son correctas
    obj.setk(10);
    cout << obj.getk() << " ";
    obj.setj(12);
    cout << obj.getj() << " ";
 
return 0;
}
