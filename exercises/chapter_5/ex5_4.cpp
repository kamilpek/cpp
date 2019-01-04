#include <iostream>
#include <iomanip>
using namespace std;

float a, b, pole;

void czytaj_dane(){
    cout << "Pole prostokata" << endl;
    cout << "Podaj bok a" << endl;
    cin >> a;
    cout << "Podaj bok b" << endl;
    cin >> b;
}

void przetworz_dane(){
    pole = a * b;
}

void wyswietl_wynik(){
    cout << fixed << setprecision(2);
    cout << "Pole wynosi " << pole << endl;
}

main(){
    czytaj_dane();
    przetworz_dane();
    wyswietl_wynik();    
}