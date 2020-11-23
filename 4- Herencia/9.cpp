#include<iostream>
using namespace std;
/* 
Composici�n
Otra forma conocida de reutilizar c�digo que se ha implementado previamente en otras clases es a tr�ves 
de lo que se conoce como Composici�n de Clases. Es similar a la herencia con la principal excepci�n 
(entre algunas otras) de que no se utiliza una sintaxis expl�cita para indicar que se est� implementando 
una composici�n, simplemente se declaran objetos de distintas clases (comunmente conocidos como partes) 
al interior de la definici�n de una nueva clase (conocida como el todo). De esta forma y de manera indirecta
la nueva clase adhiere las propiedades y m�todos de las clases que la componen. Se puede observar que la
composici�n no solo contribuye a la reusabilidad de c�digo existente sino que tambi�n hace que el c�digo
sea escalable ya que al no existir una relaci�n estrecha de dependencia entre las clases se pueden 
implementar cambios en clases individuales para que se vean reflejados en las clases compuestas por 
objetos de esas clases. El siguiente ejemplo clarifica el concepto que se acaba de exponer:
*/
class UnaClase
{
    public:
    int unaVar;
    UnaClase(int x):unaVar(x){cout<<"UnaClase construido"<<endl;}
    ~UnaClase(){cout<<"UnaClase destruido"<<endl;}
};

class OtraClase
{
    private:
    UnaClase unObj;
    public:
    /* Inicializaci�n del miembro unObj, utilizando el constructor de la clase UnaClase */
    OtraClase(const UnaClase& oVar):unObj(oVar.unaVar){} 
    int getVar(){return unObj.unaVar;}
};

int main()
{
    OtraClase obj(UnaClase(5)); /* Paso por referencia de un objeto temporal de la clase UnaClase */
    cout<<obj.getVar()<<endl;
    
    return 0;
}
