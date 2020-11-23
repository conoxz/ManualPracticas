#include <iostream>
using namespace std;
/* 
Es posible para una clase derivada heredar dos o mas clases base. 
Por ejemplo, en este corto programa, derivada hereda de ambas clases base1 y base2:
*/
class base1 {
protected:
 int x;
int m;

public:
 void showx() { cout << x << "\n"; }
};

class base2 {
protected:
 int y;

public:
 void showy() { cout << y << "\n"; }
};

// Heredar multiples clases base.
class derivada : public base1, public base2 {

public:
 void set(int i, int j) { x= i; y = j; };
};

int main()
{

  derivada obj;

  obj.set(10, 20);  // proveida por derivada.
  obj.showx();      // desde base1
  obj.showy();      // desde base2

return 0;
}
