#include <iostream>
using namespace std;
/* 
Aqui, el constructor en derivada es declarado para que tome 2 parametros, x, y. 
Sin embargo, derivada() usa solo x, y es pasada a base(). En general, el constructor 
de la clase derivada debe declarar el/los parametro(s) que esta clase requiere, 
tamnbien cualquiera requerido por la clase base. Como el ejemplo anterior ilustra, 
cualquiera de los parametrosr requeridos por la clase base son pasados a esta en la 
lista de argumentos de la clase base, especificadas despues de los dos puntos.

Aqui tenemos un programa de ejemplo que usa multiples clases bas
*/
class base1 {
protected:
 int i;

public:
 base1(int x) { i = x; cout << "Construyendo base1\n"; }
 ~base1() { cout << "Destruyendo base1\n"; }
};

class base2 {
protected:
 int k;

public:
 base2(int x) { k = x; cout << "construyendo base2\n"; }
 ~base2() { cout << "Destuyendo base2\n"; }
};

class derivada : public base1, public base2 {
 
 int j;

public:
 derivada(int x, int y, int z) : base1(y), base2(z)
    { j = x; cout << "construyendo derivada\n"; }

 ~derivada() {  cout << "Destruyendo derivada\n"; }
 void mostrar() { cout << i << " " << j << " " << k << "\n"; }
};

int main()
{
  derivada obj(3, 4, 5);

  obj.mostrar();  // mostrar 3  4  5

return 0;
}
