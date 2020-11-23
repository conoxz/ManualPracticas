#include <iostream>
using namespace std;

class Leon{ //
	public:
		Leon(); //constructor
		void Rugir();
		void Dormir();
		void Comer();

};
Leon::Leon(){ //constructor
	cout<<"Soy el constructor del León"<<endl;
}
//Funciones de las clases
void Leon::Rugir(){
	cout<<"Estoy comiendo"<<endl;
}
void Leon::Dormir(){
	cout<<"Estoy Durmiendo..."<<endl;
}
void Leon::Comer(){
	cout<<"Estoy comiendo"<<endl;
}

int main(){
	Leon leon = Leon();
	leon.Rugir();
	leon.Dormir();
	leon.Comer();
}
