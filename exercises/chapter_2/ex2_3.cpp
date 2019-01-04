#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main(){
    float a, b, c, delta, x1, x2;
    char liczba_pierwiastkow;

    cout << "Program oblicza pierwiastki rownania kwadratowego" << endl;
    cout << "Podaj a" << endl;
    cin >> a;

    if (a == 0){
        cout << "Niedozwolona wartosc a";
    } else {
        cout << "Podaj b." << endl;
        cin >> b;
        cout << "Podaj c." << endl;
        cin >> c;

        cout << fixed << setprecision(2);
        cout << "Dla podanych liczb," << endl;

        delta = b*b-4*a*c;

        if (delta < 0) liczba_pierwiastkow = 0;
        if (delta == 0) liczba_pierwiastkow = 1;
        if (delta > 0) liczba_pierwiastkow = 2;

        switch (liczba_pierwiastkow){
            case 0: {
                cout << "brak pierwiastkow rzecz." << endl;
            }
            break;
            case 1: {
                x1 = -b/(2*a);
                cout << "trojmian ma jeden pierwaistek podwojny";
                cout << " x1 = " << x1 << "." << endl;
            }
            break;
            case 2: {
                x1 = (-b-sqrt(delta))/(2*a);
                x2 = (-b+sqrt(delta))/(2*a);
                cout << "x1 = " << x1 << "." << endl;
                cout << "x2 = " << x2 << "." << endl;
            }
            break;
        }            
    }
}