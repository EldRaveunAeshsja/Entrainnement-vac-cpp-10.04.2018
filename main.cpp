#include <iostream>
#include <cmath>  //Ne pas oublier !
using namespace std;

int main()
{
    double a(0), b(0);

    cout << "Bonjour. Bienvenu dans ce programme permettant de calculer la puissance d'un nombre." << endl;

    cout << "Saisissez votre nombre : " << endl;
    cin >> a;

    cout << "saisissez sa puissance" << endl;
    cin >> b;

    double const resultat(pow(a, b)); //On effectue l'opération

    cout << a << " puissance de " << b << " = " << resultat << endl;

    return 0;
}