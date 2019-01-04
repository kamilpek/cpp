#include <iostream>
#include <iomanip>
using namespace std;

main(){
    float x, y, suma, roznica, iloczyn, iloraz;

    cout << "Suma, różnica, iloczyn i iloraz" << endl;
    cout << "Podaj x" << endl;
    cin >> x;
    cout << "Podaj y" << endl;
    cin >> y;

    suma = x + y;
    roznica = x - y;
    iloczyn = x * y;
    iloraz = x / y;

    cout << fixed << setprecision(2);
    cout << "Dla x = " << x << " i y = " << y << endl;
    cout << endl;
    cout << "suma = " << suma << endl;
    cout << "roznica = " << roznica << endl;
    cout << "iloczyn = " << iloczyn << endl;
    cout << "iloraz = " << iloraz << endl;
}