#include <iostream>
#include <cmath>
using namespace std;
/* Sobre carga de funciones amigas*/
class Triangulo{
	public:
		float base;
		float altura;
		Triangulo(float b, float a){
			this->base = b;
			this->altura = a;
		}
		void Calcular_Area(Triangulo);
		
};
class Circulo{
	public:
		const float pi = 3.141632;
		float radio;
		Circulo(float r){
			this->radio = r;
		}
		void Calcular_Area(Circulo);
};
void Calcular_Area(Triangulo t){
	float a = t.altura*t.base/2;
	cout<<"El area del Triangulo es: "<<a<<endl;
}
void Calcular_Area(Circulo c){
	float a = c.pi*pow(c.radio,2);
	cout<<"El area del Circulo es: "<<a<<endl;
}

int main(){
	Triangulo t = Triangulo(3.3,3.3);
	Circulo  c = Circulo(2);
	Calcular_Area(t);
	Calcular_Area(c);
}
