#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double f = 3.14159;

    cout << setprecision(5) << f << '\n';
    cout << setprecision(9) << f << '\n';
    cout << fixed;
    cout << setprecision(5) << f << '\n';
    cout << setprecision(9) << f << '\n';

    // setbase() converte a base para dec, hex ou oct

    // setfill() Definir caractere de preenchimento

    // setw()definir largura do campo

    return 0;
}