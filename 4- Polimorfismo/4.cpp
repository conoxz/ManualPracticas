#include<iostream>
using namespace std;
/* 
El polimorfismo tiene un problema con el constructor de copia. En clases polimorficas es imposible utilizar 
el constructor de copia ya que no existe un constructor de copia que construya un objeto de la clase derivada
 a partir de una copia de un objeto de la clase base. Para solucionar este problema (de llegar a enfrentarlo alguna vez) 
 es necesario implementar un método de clonación, también conocido como constructor virtual, que lo que hace es 
 retornar una referencia al objeto que se está copiando mediante el uso del puntero this. 
 Observe el siguiente ejemplo y ejecute la aplicación sin el método de clonación y con este:
*/
class Base
{
    public:
    Base(){cout<<"Constructor Base"<<endl;}
    Base(const Base &b){cout<<"Constructor Base"<<endl;}
    virtual Base* Clonacion() = 0; //Metodo virtual puro de clonación
    virtual ~Base(){cout<<"Destructor Base"<<endl;} //Virtual
};

class Derivada:public Base
{
    public:
    Derivada(){cout<<"Constructor Derivada"<<endl;}
    Derivada(const Derivada &d){cout<<"Constructor Derivada"<<endl;}
    Base* Clonacion(){return new Derivada(*this);} //Metodo de clonación en la clase derivada
    ~Derivada(){cout<<"Destructor Derivada"<<endl;}
};

int main()
{
    Base *ptr = new Derivada; 
    //Base *ptr2 = new Derivada(*ptr); //Intentando copia (Error!)
    Base *ptr2 = ptr->Clonacion(); //Clonando el objeto (Bien!)
    delete ptr;
    return 0;
}

