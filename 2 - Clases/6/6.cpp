#include <iostream>
using namespace std;
/* 
En C ++, hay tres especificadores de acceso:

public - los miembros son accesibles desde fuera de la clase
private - no se puede acceder (o ver) a los miembros desde fuera de la clase
protected- No se puede acceder a los miembros desde fuera de la clase, sin embargo, 
se puede acceder a ellos en clases heredadas.
*/
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
    void setY(int y);
    int getY();
  private:   // Private access specifier
    int y;   // Private attribute
};
void MyClass::setY(int y){
	this->y = y;
}
int MyClass::getY(){
	return this->y;
}
int main(){
	MyClass objeto;
	objeto.x = 10;
	cout<<"Public x accedida desde main \nx = "<<objeto.x<<endl;
	objeto.setY(10);
	cout<<"Private y accedida desde una funcion de la clase \ny = "<<objeto.getY()<<endl;
	return 0;
}
