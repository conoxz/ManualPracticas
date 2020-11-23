#include <iostream>

using namespace std;
/* 
Un miembro privado de una clase base no es accesible por cualquier otra parte de su programa, 
incluyendo cualquier clase derivada. Sin embargo, los miembros protegidos se comportan diferente.
 Cuando una clase base es heredada como pública, los miembros protegidos en la clase base se 
 convierten en miembros protegidos de la clase derivada, y 'son' accesibles a la clase derivada.
  Además, usando 'protected' se pueden crear miembros de clases que son privados para su clase
   pero que aun así pueden ser heredados y accedidos por una clase derivada.
*/
class base {
 
protected:
 int i, j;  // privados a base, pero accesibles a derivada.

public:
 void set(int a, int b) { i = a; j = b; }
 void mostrar() { cout << i << " " << j << "\n"; }
};

class derivada : public base {

 int k;

public:
 // derivada puede accesar en base a 'j' e 'i'
 void setk() { k = i * j; }
 void mostrark() { cout << k << "\n"; }
};

int main()
{
  derivada obj;
  
  obj.set(2, 3); // OK, conocido por derivada.
  obj.mostrar(); // OK, conocido por derivada.

  obj.setk(); 
  obj.mostrark();

return 0;
}
