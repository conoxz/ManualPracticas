#include<iostream>
using namespace std;
/* 
La función principal de los constructores de una clase es la de inicializar las varibles de la clase,
 sin embargo el constructor de una clase derivada no puede inicializar de manera directa las variables 
 que se han heredado de la clase base. Para que el constructor de la clase derivada pueda inicializar 
 las variables heredadas debe invocar al constructor de la clase base. Esto se logra con el operador 
 dos puntos : y ejecutando el constructor de la clase base. Observe el ejemplo a continuación:
*/
class ClaseBase
{
    protected:
    int unaVar = 0;
    public:
    ClaseBase(int x):unaVar(x){}
    void unMetodo(void)
    {
        cout<<"unaVar = "<<unaVar<<endl;
    }
};

class ClaseDerivada : public ClaseBase  
{
    public:
    ClaseDerivada(int x):ClaseBase(x){} /* Ejecución del constructor de la clase base para inicializar a unaVar */
};

int main()
{
    ClaseDerivada obj1(50); /* Aquí el constructor de la clase derivada invoca el constructor de la clase base */
    obj1.unMetodo(); 
    return 0;
}
