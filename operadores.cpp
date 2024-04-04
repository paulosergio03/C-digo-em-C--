#include <iostream>
using namespace std;

int main()
{
    // +=
    // -=
    // *=
    // /=

    /* int idade = 50;
    idade += 10;
    cout << idade << endl;
    */

    int idade = 50;
    int idadeClone = 50;

    int resultado = idade++;
    int resultado2 = ++idadeClone;

    cout << "resultado = " << resultado << endl;
    cout << "idade = " << idade << endl;

    cout << "resultdado2 = " << resultado2 << endl;
    cout << "idadeClone = " << idadeClone << endl;



        return 0;
}