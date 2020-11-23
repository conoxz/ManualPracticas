#include <iostream>
#include <cmath>
/* 
En el ejemplo a continuación se sobrecargan los operadores de las operaciones matemáticas
 básicas para implementar dichas operaciones en la clase MiVector3D:
*/
using namespace std;
class MiVector3D
{
	
	public:
	double vec[3];
	MiVector3D(double, double, double);
	MiVector3D(const MiVector3D&) = default;
	MiVector3D operator+(const MiVector3D&); //Suma
	MiVector3D operator-(const MiVector3D&); //Resta
	double operator*(const MiVector3D&); //Producto punto
	MiVector3D operator/(double); //División por un escalar
	MiVector3D operator>>(int);  //Potenciación a n potencia
	
};
MiVector3D::MiVector3D(double x=0, double y=0, double z=0)  //Constructor
{
	vec[0] = x;
	vec[1] = y;
	vec[2] = z;
}

MiVector3D MiVector3D::operator+(const MiVector3D& otro) //Suma
{
	double x = vec[0] + otro.vec[0];
	double y = vec[1] + otro.vec[1];
	double z = vec[2] + otro.vec[2];
	
	MiVector3D vec(x, y, z);
	return vec;
}

MiVector3D MiVector3D::operator-(const MiVector3D& otro) //Resta
{
	double x = vec[0] - otro.vec[0];
	double y = vec[1] - otro.vec[1];
		double z = vec[2] - otro.vec[2];
	
	MiVector3D vec(x, y, z);
	return vec;
}

double MiVector3D::operator*(const MiVector3D& otro) //Producto punto
{
	double resultado = (vec[0]*otro.vec[0])+(vec[1]*otro.vec[1])+(vec[2]*otro.vec[2]);
	return resultado;
}

MiVector3D MiVector3D::operator/(double n) //División por un escalar
{
	if(n != 0)
	{
		double x = vec[0]/n;
		double y = vec[1]/n;
		double z = vec[2]/n;
		
		MiVector3D vec(x,y,z);
		return vec;
	}
	MiVector3D vec2(0,0,0);
	return vec2;
}
MiVector3D MiVector3D::operator>>(int n)  //Potenciación a n potencia
{
	double x = pow(vec[0], n);
	double y = pow(vec[1], n);
	double z = pow(vec[2], n);
	
	MiVector3D vec(x, y, z);
	
	return vec;
		
}
int main()
{
	MiVector3D vec1(1,2,3);
	MiVector3D vec2(10,20,30);
	
	//Suma:	
	MiVector3D suma = vec1 + vec2;
	cout<<"Suma: ";
	cout<<"["<<suma.vec[0]<<","<<suma.vec[1]<<","<<suma.vec[2]<<"]"<<endl;
	
	//Resta:	
	MiVector3D resta = vec2 - vec1;
	cout<<"Resta: ";
	cout<<"["<<resta.vec[0]<<","<<resta.vec[1]<<","<<resta.vec[2]<<"]"<<endl;
	
	//Producto punto:	
	double prodpun = vec2 * vec1;
	cout<<"Producto punto: "<<prodpun<<endl;
	
	//Division por un escalar
	MiVector3D division = vec2/10;
	cout<<"Division: ";
	cout<<"["<<division.vec[0]<<","<<division.vec[1]<<","<<division.vec[2]<<"]"<<endl;
	
	//Potenciacion
	MiVector3D potencia = vec1>>2;
	cout<<"Potenciacion: ";
	cout<<"["<<potencia.vec[0]<<","<<potencia.vec[1]<<","<<potencia.vec[2]<<"]"<<endl;	
	
	return 0;	
}
