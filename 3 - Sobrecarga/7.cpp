#include <iostream>
using namespace std;
 /* 
 Así como el operador << debe ser sobrecargado, lo mismo es cierto para el 
 operador >> para poder ser usado con el stream estándar de entrada ( cin ). 
 Retomaremos nuevamente a la clase Pareja para dar un ejemplo.
 */
class Pareja {
public:
    double a, b;
 
    // constructor parametrizado
    Pareja(const double a,const double b)
    {
        this->a = a;
        this->b = b;
    }
    Pareja(){
	}
};
// Sobrecarga del operador +
Pareja operator +(const Pareja &p1,const Pareja &p2)
{
    Pareja res( p1.a + p2.a, p1.b + p2.b );
    return res;
}
istream& operator >> (istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) : ";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}

// Sobrecarga del operador << para la clase Pareja
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}
int main()
{
    Pareja A(50, 75 );
    Pareja B;
    cin >> B;
    Pareja C = A + B;
 
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << "\n";
 
    return 0;
}
