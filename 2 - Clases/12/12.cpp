#include<iostream>

using namespace std;
/* 
Una función o una clase "Amiga" es aquella a la que se le ha otorgado la capacidad de tener acceso a los 
miembros privados de la clase que la ha declarado como amiga. Para que una clase declare a otra clase o 
a una función como amiga se debe declarar esa función o esa clase al interior de la clase y se debe utilizar
 la palabra reservada friend en esa declaración.


Las funciones amigas o los métodos de una clase amiga pueden en ocasiones recibir como 
parámetro de entrada una referencia a un objeto de la clase que las declaro como amigos.

Declaración de una función amiga:
*/
class MiClase
{
	public:
	void printMembers();
	friend void funcionAmiga(int x, MiClase& mc); //Se usa la palabra friend y uno de los parámetros es una referencia a la clase MiClase
	private:
	int a;
};

void MiClase::printMembers()
{
	cout<<"El valor de 'a' es: "<<a<<endl;
}

void funcionAmiga(int x, MiClase& mc)
{
	mc.a = x; //Acceso a un miembro privado del objeto mc de la clase MiClase
}

int main()
{
	MiClase obj;
	funcionAmiga(5, obj);
	obj.printMembers();
	
	return 0;
}
