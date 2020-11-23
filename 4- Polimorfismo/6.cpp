#include<iostream>
using namespace std;
/* 
Pero en caso de que por alguna raz�n se vea obligado a implmentar una estructura jer�rquica de ese 
tipo se sugiere el uso de la palabra reservada virtual en la herencia de las clases intermedias B y C. 
Lo anterior corrige el problema de la ambig�edad y ya no se dar� el error y se ejecutar� el m�todo heredado desde la clase A.
*/
class A
{
    public:
    void unMetodoX(){cout<<"Soy de la clase A"<<endl;}
};

class B: virtual public A  /* Agregando 'virtual' a la herencia de las clases derivadas intermedias */
{
};

class C: virtual public A /* Agregando 'virtual' a la herencia de las clases derivadas intermedias */
{
};

class D: public B, public C
{
};

int main()
{
    D obj;
    obj.unMetodoX(); /* En este caso no habr� ambig�edad */
    return 0;
};
