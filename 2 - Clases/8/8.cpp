#include <iostream>
using namespace std;
/* 
El siguiente código de ejemplo ilustra el procedimiento de reserva y liberación de memoria dinámica con los operadores new y delete
*/
class MyClass
{
    // Miembros de la clase
};

int main()
{
    int *ptr = new int; // Reserva de memoria para un dato de tipo int (4 bytes en arquitecturas 32bits)
    *ptr = 150; // Guardando un dato en la memoria reservada
    
    MyClass *ptr2 = new MyClass[5]; // Arreglo dinamico de objetos del tipo MyClass
    for(int i=0; i<5; ++i)
    {
        MyClass obj;
        *(ptr2 + i) = obj; // Guardando los objetos en las posiciones de memoria reservadas
        cout<<(ptr2 + i)<<endl;
    }
    
    delete ptr; // Liberando de nuevo la memoria 
    delete[] ptr2;
    
    return 0;
}
