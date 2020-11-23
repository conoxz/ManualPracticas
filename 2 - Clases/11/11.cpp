#include <iostream>
#include <math.h>
using namespace std;
/* 
n el siguiente programa se construye una clase Triangulo destinada a representar triángulos en el plano. 
Esta clase tiene tres propiedades, denominadas vértices, que son los puntos que caracterizan a cada posible triángulo. 
A su vez tiene varios métodos, el principal de ellos es la función getArea, que devuelve el área delimitada en el triángulo.

Para definir los vértices se ha utilizado una clase auxiliar, de modo que estas propiedades de la clase Triangulo 
son objetos de otra clase denominada Vertice.

A su vez la clase Vertice tiene dos propiedades y dos métodos principales. Las propiedades son las coordenadas 
cartesianas X e Y de cada objeto (que representa un punto en el plano).  El método getxy muestra las coordenadas
 X, Y del objeto. El método getDist obtiene la distancia entre el objeto y otro que se pasa como argumento 
 (distancia entre dos puntos).
*/
class Vertice {               // L.4: Clase auxiliar
  float x, y;                 // privados por defecto
  public:
  friend class Triangulo;     // L.7:
  void getxy() {              // muestra las propiedades x y del vertice
    cout << "vertice (" << x << "," << y << ")" << endl;
  };
  float getDist(const Vertice&);
  Vertice(int i =0, int j =0) { x = i; y = j; }      // L.12: constructor
  Vertice(const Vertice& rf) { x = rf.x; y = rf.y; } // constructor-copia
};

float Vertice::getDist(const Vertice& rf) {
  float dX = rf.x - x, dY = rf.y - y;
  float dist = pow(dX * dX + dY * dY, .5);           // L.17:
  cout << "distancia: " << dist << endl;
  return dist;
}

class Triangulo {            // L.22: Clase contenedora
  Vertice vA, vB, vC;        // L.23: miembros-objeto
  public:
  Triangulo(Vertice v1 = Vertice(),     // L.25: Constructor

            Vertice v2 = Vertice(),

            Vertice v3 = Vertice() ) {
      vA = v1; vB = v2; vC = v3;
  }
  void getT() { vA.getxy(); vB.getxy(); vC.getxy(); }  // L.30:
  float getArea();           // declaracion de getArea
};

float Triangulo::getArea() {    // L.32: definición de getArea
  int Ax = vB.x - vA.x; int Ay = vB.y - vA.y;
  int Bx = vC.x - vA.x; int By = vC.y - vA.y;
  double s = fabs ((Ax * By - Ay * Bx) * .5);
  cout << "Area: " << s << endl;
  return s;
}

int main() {                 // =======================
  Vertice origen, v1(1,2), v2(3,4);        // M.1:
  origen.getDist(v2);
  v1.getDist(v2);
  Triangulo T1(v1, v2, Vertice(7,3)), T2;  // M.4:
  T1.getT(); T1.getArea();

  T2.getT(); T2.getArea();
}
