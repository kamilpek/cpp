#include <iostream>
#include <iomanip>
using namespace std;

main(){
    float a, b, pole;

    cout << "Program oblicza pole prostokota." << endl;
    cout << "Podaj bok a." << endl;
    cin >> a;
    cout << "Podaj bok b." << endl;
    cin >> b;
    pole = a * b;

    cout << fixed;
    cout << setprecision(2);
    cout << "Pole prostokata o boku a = " << a << " i boku b = " << b;
    cout << " wynosi " << pole << "." << endl;    
}

