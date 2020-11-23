#include<iostream>
using namespace std;
/* 
Constructor de copia: Es un constructor que tiene como parámetro de entrada una referencia a otro objeto de la misma clase, por tanto las variables del 
objeto que se está creando se inicializan con los valores de las variables del objeto que se pasa como parámetro. Por esa misma razón se conoce como constructor
 de copia, porque copia los valores de un objeto existente para incializar otro objeto. En la declaración del constructor el parámetro de entrada debe tener 
 calificación const para evitar modificaciones en el objeto que se está copiando.
*/
class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int);
	FooClass(const FooClass&); //Constructor de copia
	void printVars();
};

FooClass::FooClass(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

FooClass::FooClass(const FooClass& obj)
{
	x = obj.x;
	y = obj.y;
	z = obj.z;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj(10,20,30); //Inicialización con parámetros de entrada
	FooClass fooCopia(fooObj); //Inicialización de fooCopia con los valores de fooObj
	fooCopia.printVars();
	return 0;
}

