#include<iostream>
using namespace std;
/* 
Constructor de copia: Es un constructor que tiene como par�metro de entrada una referencia a otro objeto de la misma clase, por tanto las variables del 
objeto que se est� creando se inicializan con los valores de las variables del objeto que se pasa como par�metro. Por esa misma raz�n se conoce como constructor
 de copia, porque copia los valores de un objeto existente para incializar otro objeto. En la declaraci�n del constructor el par�metro de entrada debe tener 
 calificaci�n const para evitar modificaciones en el objeto que se est� copiando.
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
	FooClass fooObj(10,20,30); //Inicializaci�n con par�metros de entrada
	FooClass fooCopia(fooObj); //Inicializaci�n de fooCopia con los valores de fooObj
	fooCopia.printVars();
	return 0;
}

