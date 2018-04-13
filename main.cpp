#include <iostream>
using namespace std;

int main()
{
    int a(0), b(0), resultat(0);

    cout << "saisissez deux nombres entier :" << endl;
    cin >> a;
    cin >> b;

    resultat = a + b;
    cout << "Le calcul : " << a << " + " << b << " = " << resultat << endl;


    return 0;
}