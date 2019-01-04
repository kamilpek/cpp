#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class trojmian {
    public:
    float a, b, c, delta, x1, x2;
    char liczba_pierwiastkow;
    void czytaj_dane();
    void przetworz_dane();
    void wyswietl_wyniki();
};

void trojmian::czytaj_dane(){
    cout << "Program oblicza pierwiastki rownania kwadratowego" << endl;
    cout << "Podaj a" << endl;
    cin >> a;

    if (a == 0){
        cout << "Niedozwolona wartosc a";
        exit(1);
    } else {
        cout << "Podaj b." << endl;
        cin >> b;
        cout << "Podaj c." << endl;
        cin >> c;
    }
}

void trojmian::przetworz_dane(){
    delta = b*b-4*a*c;

    if (delta < 0) liczba_pierwiastkow = 0;
    if (delta == 0) liczba_pierwiastkow = 1;
    if (delta > 0) liczba_pierwiastkow = 2;

    switch(liczba_pierwiastkow){
        case 1: {
            x1 = -b/(2*a);
        }
        break;
        case 2: {
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
        }
        break;
    }
}

void trojmian::wyswietl_wyniki(){
    cout << "Dla wprowadzonych liczb:" << endl;
    cout << "a = " << a << "," << endl;
    cout << "b = " << b << "," << endl;
    cout << "c = " << c << "." << endl;

    switch(liczba_pierwiastkow){
        case 0: {
            cout << "brak pierwiastkow rzecz." << endl;
        }
        break;
        case 1: {
            cout << "trojmian ma jeden pierwaistek podwojny";
            cout << " x1 = " << x1 << "." << endl;
        }
        break;
        case 2: {
            cout << "x1 = " << x1 << "." << endl;
            cout << "x2 = " << x2 << "." << endl;
        }
        break;
    }
}

main(){
    trojmian trojmian1;

    cout << fixed << setprecision(2);

    trojmian1.czytaj_dane();
    trojmian1.przetworz_dane();
    trojmian1.wyswietl_wyniki();
}
