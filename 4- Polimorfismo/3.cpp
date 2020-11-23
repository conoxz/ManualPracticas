#include<iostream>
using namespace std;
/* 
 En el siguiente código de ejemplo ejecute usando la firma del destructor que no incluye la palabra virtual
  y la que si la incluye (comente y descomente las líneas) y observe la diferencia en el resultado de la ejecución:
*/
class Base
{
    public:
    Base(){cout<<"Constructor Base"<<endl;}
    ~Base(){cout<<"Destructor Base"<<endl;} //No virtual
    //virtual ~Base(){cout<<"Destructor Base"<<endl;} //Virtual
};

class Derivada:public Base
{
    public:
    Derivada(){cout<<"Constructor Derivada"<<endl;}
    ~Derivada(){cout<<"Destructor Derivada"<<endl;}
};

int main()
{
    Base *ptr = new Derivada; //Puntero de clase Base a un objeto de clase Derivada
    delete ptr;
    return 0;
}
