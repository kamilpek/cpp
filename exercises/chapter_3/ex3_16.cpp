#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
using namespace std;

main(){
    const int ilosc_liczb = 5;

    int i;
    float liczba, suma, min, max;

    cout << "Program losuje " << ilosc_liczb << " liczb z przedzialu od 0 do 99" << endl;
    cout << "a nastepnie znajduje najmniejsza i najwieksza oraz" << endl;
    cout << "oblicza srednia ze wszystkich wylosowanych liczb." << endl;

    suma = 0;
    srand(time(NULL));
    min = rand()%100;
    cout << endl << "Wylosowano liczby: " << min << ", ";
    max = min;
    suma += max;

    for(i = 1; i <= ilosc_liczb-1; i++){
        liczba = rand()%100;

        if (i <= ilosc_liczb-2){
            cout << liczba << ", ";
        } else {
            cout << liczba << "." << endl;
        }

        if (max < liczba) max = liczba;
        if (liczba < min) min = liczba;

        suma += liczba;
    }

    cout << "Najwieksza liczba to " << max << "." << endl;
    cout << "Najmniejsza liczba to " << min << "." << endl;
    cout << "Srednia wynosi " << fixed << setprecision(2) << suma/ilosc_liczb << "." << endl;

}
