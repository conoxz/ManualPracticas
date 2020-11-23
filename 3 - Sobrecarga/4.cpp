#include<iostream>
using namespace std;
/* 
 Ejempo para implementar una sobrecarga del operador * para que "multiplique" objetos de la clase MyClass:
*/
class MyClass
{
	int x;
	public:
	MyClass(int n):x(n){}
	
	int operator*(const MyClass& a) const //Sobrecarga del operador '*' 
	{
		return x*a.x;
	}
}; 

int main()
{
	MyClass x(2);
    MyClass y(3);
    int a = x*y;  //Utilizando el operador sobrecargado
    cout<< a <<endl;
	
	return 0;
}
