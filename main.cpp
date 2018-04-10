#include <iostream>
using namespace std;

int main()
{
    int chiffre(26);
    int& monChiffreEnRef(chiffre);

    cout << chiffre << endl;

    cout << monChiffreEnRef << endl;

   return 0;
}