#include<iostream>

using namespace std;
/* 
Hay que tener en cuenta que la palabra static solo debe utilizarse en la 
declaraci�n del miembro en la definici�n de la clase. Por fuera de la clase, 
en la definici�n de los miembros no debe usarse (observe el ejemplo anterior).
 Observe tambi�n la utilizaci�n del operador de resoluci�n de contexto (�mbito) ::

El ejemplo m�s usual de utilizaci�n de miembros static en una clase es en el que 
se declara un miembro que permite contar el n�mero de instancias (objetos) de la
 clase que se han declarado
 
 Ejemplo:
*/
class MyClass
{
	public:
	static int contadorObjetosdelaClase; 
	MyClass();
};

int MyClass::contadorObjetosdelaClase = 0;

MyClass::MyClass()
{
    contadorObjetosdelaClase++;
}

int main()
{
	MyClass objeto1;
	MyClass objeto2;
	MyClass objeto3;
	MyClass objeto4;
	
	cout<<"Se han declarado "<<MyClass::contadorObjetosdelaClase<<" objetos de la clase MyClass"<<endl;
	MyClass objeto5;
	MyClass objeto6;
	
	cout<<"Se han declarado "<<MyClass::contadorObjetosdelaClase<<" objetos de la clase MyClass"<<endl;
	
	return 0;
}

