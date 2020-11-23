#include<iostream>
using namespace std;
/* 
	Todos los miembros de la clase que no son definidos por default son private
*/
class MiClase{
	int a;
	int b;
	public:
		MiClase(){
			this->a = 10;
			this->b = 10;
		}	
		Print(){
			cout<<"a = "<<this->a<<endl<<"b = "<<this->b<<endl;
		}
		
};
int main(){
	MiClase obj;
	//	obj.a= 10; [Error]
	obj.Print();
	return 0;
}
