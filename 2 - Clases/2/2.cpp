#include <iostream>
#include <cmath>
using namespace std;
class Circulo{
	private: 
		float pi = 3.1416;
		float radio;
	public: 
		Circulo(float radio); //constructor
		~Circulo(); //destructor
		//funciones miembro
		float Area();
		float Circunferencia();
};
//Constructor

Circulo::Circulo(float radio){
	this->radio = radio;
}
//Destructor

Circulo::~Circulo(){
	cout<<"Ejecutando el Destructor..."<<endl;
}

//Funciones de la clase
float Circulo::Area(){
	float area = pi * pow(this->radio,2);
	return area;
}
float Circulo::Circunferencia(){
	float cir = pi * 2 * this->radio;
	return cir;
}


int main(){
	float radio;
	cout<<"Leer radio: ";
	cin>>radio;
	Circulo circulo = Circulo(radio);
	cout<<"El Area es: "<<circulo.Area()<<endl;
	cout<<"La circunferencia es: "<<circulo.Circunferencia()<<endl;
}
