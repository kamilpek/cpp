#include <iostream>
#include <iomanip>
using namespace std;

main(){
    float a, b, c, x;

    cout << "Program oblicza wartosc x z rownania liniowego ax+b = c" << endl;
    cout << "Podaj a" << endl;
    cin >> a;

    if (a == 0){
        cout << "Niedozwolona wrtosc wspolczynnika. Nacisnij dowolny klawisz.";
    } else {
        cout << "Podaj b." << endl;
        cin >> b;
        cout << "Podaj c." << endl;
        cin >> c;

        x = (c-b)/2;

        cout << fixed << setprecision(2);
        cout << "Dla a = " << a << ", b = " << b << ", c = " << c;
        cout << " wartosc x = " << x << "." << endl;        
    }
}