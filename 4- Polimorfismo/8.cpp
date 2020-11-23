#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
/* 
Ejemplo de ligadura dinamica en una clase padre e hija
*/
class Persona{
	public:
		string nombre;
		int edad;
	
		Persona(string n, int e){
			this->nombre = n;
			this->edad = e;
		}
		virtual void mostrar(){
			cout<<"Nombre: "<<this->nombre<<endl;
			cout<<"Edad: "<<this->edad<<endl;
		}
};
class Alumno : public Persona{
	public:
		float cal_final;
		Alumno(string n,int e, float c):Persona(n,e){
			this->cal_final = c;
		}
		void mostrar(){
			cout<<"Nombre: "<<this->nombre<<endl;
			cout<<"Edad: "<<this->edad<<endl;
			cout<<"Calificacion final: "<<this->cal_final<<endl;
		}
};

int main(){
	Persona *per[3];
	per[0] = new Alumno("Adrian",22,8.8);
	per[1] = new Alumno("Alondra",22,9.7);
	per[2] = new Alumno("Eduardo",22,9.1);
	for(int i = 0; i < 3; i++){
		per[i]->mostrar();
		cout<<endl;
	}
}
