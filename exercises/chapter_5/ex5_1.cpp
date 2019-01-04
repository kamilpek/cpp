#include <iostream>
#include <iomanip>
using namespace std;

float a, b, pole;

void pole_prostokata(){
    cout << "Pole prostokata" << endl;
    cout << "Podaj bok a" << endl;
    cin >> a;
    cout << "Podaj bok b" << endl;
    cin >> b;
    pole = a * b;
    cout << fixed << setprecision(2);
    cout << "Pole wynosi " << pole << endl;
}

main(){
    pole_prostokata();
}