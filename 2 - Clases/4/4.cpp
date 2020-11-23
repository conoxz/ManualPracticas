#include<iostream>
using namespace std;
/*
Constructor parametrizado: Es un constructor que tiene par�metros de entrada que se utilizan luego en la inicializaci�n de las variables de clase.
*/
class FooClass
{
	int x, y, z;
	public:
	FooClass(int, int, int); //Constructor parametrizado
	void printVars();
};

FooClass::FooClass(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

void FooClass::printVars()
{
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main(){
	FooClass fooObj(10,20,30); //Inicializaci�n con par�metros de entrada
	fooObj.printVars();
	return 0;
}
