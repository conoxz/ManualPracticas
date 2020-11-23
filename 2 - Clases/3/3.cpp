#include<iostream>
using namespace std;
/* 
Constructor por defecto: Es un constructor que no tiene par�metros de entrada, la inicializaci�n de las variables se hace con valores por
 defecto que el programador codifica en el bloque de c�digo del constructor.
*/
class FooClass
{
	int x, y, z;
	public:
	FooClass(); //Constructor por defecto
	void printVars();
};

FooClass::FooClass()
{
	x = 1;
	y = 2;
	z = 3;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj; //Inicializaci�n por defecto
	fooObj.printVars();
	return 0;
}
