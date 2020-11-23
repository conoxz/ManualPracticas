#include <iostream>
using namespace std;

/* 
C++ soporta herencia permitiendo a una clase incorporar otra clase dentro de su declaración.
Antes de discutir los detalles y la teoría, comencemos por un ejemplo de herencia. La siguiente clase,
 llamada vehiculo_rodante, define muy ampliamente a vehículos que viajan en la carretera. Este almacena 
 el numero de ruedas que un vehículo tiene y el numero de pasajeros que puede llevar.
*/
class vehiculo_rodante {
 
 int ruedas;
 int pasajeros;
 
public:
 void set_ruedas(int num) { ruedas = num;}
 int get_ruedas() { return ruedas; }
 void set_pasajeros(int num) { pasajeros = num; }
 int get_pasajeros() { return pasajeros; }
 
};
class camion : public vehiculo_rodante {
 int carga;
 
public:
 void set_carga(int size) { carga = size; }
 int get_carga() { return carga; }
 void mostrar();
 
};
enum tipo {carro, van, camioneta};
 
// Definir un automovil.
class automovil : public vehiculo_rodante {
 enum tipo tipo_de_carro;
 
public:
 void set_tipo(tipo t) { tipo_de_carro = t; }
 enum tipo get_tipo() { return tipo_de_carro; };
 void mostrar();
 
};
 
void camion::mostrar()
{
 cout << "ruedas: " << get_ruedas() << "\n";
 cout << "pasajeros: " << get_pasajeros() << "\n";
 cout << "Capacidad de carga en pies cúbicos: " << carga << "\n";
}
 
void automovil::mostrar()
{
 cout << "ruedas: " << get_ruedas() << "\n";
 cout << "pasajeros: " << get_pasajeros() << "\n";
 cout << "tipo: ";
 
 switch(get_tipo()) {
 
   case van:
    cout << "van\n";
    break;
 
   case carro: 
    cout << "carro\n";
    break;
 
   case camioneta: 
    cout << "camioneta\n";
 
  }
}
 
int main()
{
  camion t1, t2;
  automovil c;
 
  t1.set_ruedas(18);
  t1.set_pasajeros(2);
  t1.set_carga(3200);
 
  t2.set_ruedas(6);
  t2.set_pasajeros(3);
  t2.set_carga(1200);
 
  t1.mostrar();
  cout << "\n";
  t2.mostrar();
  cout << "\n";
 
  c.set_ruedas(4);
  c.set_pasajeros(6);
  c.set_tipo(van);
 
  c.mostrar();
 
return 0;
}
