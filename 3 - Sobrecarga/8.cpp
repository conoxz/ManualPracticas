#include <iostream>
/* 
Con el propósito de ver un ejemplo práctico vamos a retomar una vez más la tan
 famosa clase Pareja, salvo que en esta ocasión vamos a sobrecargar dentro de
  la misma a los operadores binarios: + (suma), - (resta), * (multiplicación) y
   / (división); el operador de asignación (=); el operador de incremento (++) 
   y el operador de comparación (==).
*/
using namespace std;

class Pareja {

private:
    int a, b;

public:
    // constructor base
    Pareja() : a(0), b(0) {}

    // constructor parametrizado
    Pareja(const int a,const int b) {
	this->a = a;
	this->b = b;
    }

    // constructor de copia
    Pareja(const Pareja&);

    // operadores miembros
    Pareja& operator + (const Pareja &p);
    Pareja& operator - (const Pareja &p);
    Pareja& operator * (const Pareja &p);
    Pareja& operator / (const Pareja &p);
    Pareja& operator = (const Pareja &p);
    Pareja& operator ++();
    bool    operator ==(const Pareja &p) const;

    // operadores no miembros
    friend ostream& operator << (ostream &o,const Pareja &p);
    friend istream& operator >> (istream &o, Pareja &p);
};

// implementacion de los operadores para la clase Pareja
//....................................
Pareja::Pareja(const Pareja &p)
{
    *this=p;
}
//....................................
Pareja& Pareja::operator + (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator - (const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator * (const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator / (const Pareja &p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator = (const Pareja &p)
{
    if(this!=&p){ //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}

//....................................
Pareja& Pareja::operator ++ ()
{
    this->a ++;
    this->b ++;
    return *this;
}

//....................................
bool Pareja::operator == (const Pareja &p) const
{
    return this->a == p.a && this->b == p.b;
}

// implemetaci¢n de operadores no miembros
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream& operator >> (istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}


// prueba para la clase Pareja
int main()
{
    Pareja A(50,  75);
    Pareja B(100, 15);
    Pareja C;

    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "........................." << endl;
    C = A * B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;

    ++C;
    cout << "C = " << C << endl;
    cout << "A == B " << ( (A==B) ? "Si": "No" );
    cin.get();
    return 0;
}
