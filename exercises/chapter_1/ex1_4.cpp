#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main(){
    float r, objetosc;

    cout << "Program oblicza objetosc kuli o promieniu r." << endl;
    cout << "Podaj promien r." << endl;
    cin >> r;
    objetosc = 4*M_PI*r*r*r/3;
    cout << fixed << setprecision(2);
    cout << "Objetosc kuli o promieniu r = " << r << " wynosi ";
    cout << objetosc << "." << endl;
}