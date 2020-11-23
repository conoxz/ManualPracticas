#include <iostream>
using namespace std;
/*
Esta palabra reservada en C++, indica al compilador que cada llamado a la función inline deberá
 ser reemplazado por el cuerpo de la función. En la practica la función inline es utilizado 
 sólo cuando las funciones son pequeñas, esto para evitar generar un ejecutable de tamaño considerable. 

La ventaja que esta palabra reservada, es la de acelerar un programa, ya que permite resumir
 considerablemente el código, en particular para los accesadores de una clase. Un accesador 
 de clase es típicamente una función de una línea.
 
 Ejemplo:
 */
inline void mensaje(){
 cout << "Chido" << endl;
}

class objeto{
	protected:
	    int x;
	public:
	    inline void set_x(int x){
	        this->x = x;
	    }
	    inline int get_x() {
	        return x;
	    }
	
};

int main () {
	 mensaje();
	 objeto obA;
	 obA.set_x(7);
	 cout << obA.get_x() << endl;
	 return 0;
}
