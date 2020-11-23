#include <iostream>
using namespace std;
/* 
Este operador se usa para realizar conversiones de tipo que de otro modo haría el compilador automáticamente,
 por ejemplo, convertir un puntero a un objeto de una clase derivada a un puntero a una clase base pública:
*/
class Base {
  public:
   Base(int valor) : x(valor) {}
   void Mostrar() { cout << x << endl; }
   
  protected:
   int x;
};

class Derivada : public Base {
  public:
   Derivada(int ivalor, float fvalor) : 
      Base(ivalor), y(fvalor) {}
   void Mostrar() {
      cout << x << ", " << y << endl; 
   }
   
  private:
   float y;
};

int main() {
   Derivada *pDer = new Derivada(10, 23.3);
   Base *pBas;
   
   pDer->Mostrar(); // Derivada
   pBas = static_cast<Base *> (pDer);
   // pBas = pDer; // Igualmente legal, pero implícito
   pBas->Mostrar(); // Base
   
   delete pDer;
   return 0;
}
