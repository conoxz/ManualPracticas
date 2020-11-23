#include <iostream>
#include <cstring>
using namespace std;
/* 
Una vez que una función es declarada como virtual, lo seguirá siendo en las clases derivadas, es decir, la propiedad virtual se hereda.
Si la función virtual no se define exactamente con el mismo tipo de valor de retorno y el
 mismo número y tipo de parámetros que en la clase base, no se considerará como la misma 
 función, sino como una función superpuesta.
Este mecanismo sólo funciona con punteros y referencias, usarlo con objetos no tiene sentido.
Veamos un ejemplo con referencias:

*/
class Persona {
  public:
   Persona(const char *n) { strcpy(nombre, n); }
   virtual void VerNombre() { 
      cout << nombre << endl; 
   }
  protected:
   char nombre[30];
};

class Empleado : public Persona {
  public:
   Empleado(const char *n) : Persona(n) {}
   void VerNombre() { 
      cout << "Emp: " << nombre << endl; 
   }
};

class Estudiante : public Persona {
  public:
   Estudiante(const char *n) : Persona(n) {}
   void VerNombre() { 
      cout << "Est: " << nombre << endl; 
   }
};

int main() {
   Estudiante Pepito("Jose");
   Empleado Carlos("Carlos");
   Persona &rPepito = Pepito; // Referencia como Persona
   Persona &rCarlos = Carlos; // Referencia como Persona

   rCarlos.VerNombre();
   rPepito.VerNombre();
    
   return 0;
}
