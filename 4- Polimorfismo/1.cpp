#include<iostream>
using namespace std;
/* 
El polimorfismo dinámico se refiere a que se puede apuntar un puntero del tipo de la clase base 
a objetos del tipo de la clase derivada, esto permite que una instancia del tipo de la clase base
 pueda invocar métodos del tipo de la clase derivada, siempre y cuando sean métodos redefinidos y
  que hayan sido declarados en la clase base con la palabra virtual. 
  El siguiente ejemplo permite observar con mayor claridad la situación
*/
class Base
{
    public:
    virtual void MetodoOne()
    {
        cout<<"Clase Base MetodoOne"<<endl;
    }
    void MetodoTwo()
    {
        cout<<"Clase Base MetodoTwo"<<endl;
    }
};

class Derivada:public Base
{
    public:
    void MetodoOne()
    {
        cout<<"Clase Derivada MetodoOne"<<endl;
    }
    void MetodoTwo()
    {
        cout<<"Clase Derivada MetodoTwo"<<endl;
    }
};

int main()
{
    Base *ptr = new Derivada; //Puntero de clase Base a un objeto de clase Derivada
    ptr->MetodoOne();
    ptr->MetodoTwo();
    delete ptr;
    return 0;
}
