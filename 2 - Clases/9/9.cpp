#include <iostream>
using namespace std;
/*
Esta palabra reservada en C++, indica al compilador que cada llamado a la funci�n inline deber�
 ser reemplazado por el cuerpo de la funci�n. En la practica la funci�n inline es utilizado 
 s�lo cuando las funciones son peque�as, esto para evitar generar un ejecutable de tama�o considerable. 

La ventaja que esta palabra reservada, es la de acelerar un programa, ya que permite resumir
 considerablemente el c�digo, en particular para los accesadores de una clase. Un accesador 
 de clase es t�picamente una funci�n de una l�nea.
 
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
