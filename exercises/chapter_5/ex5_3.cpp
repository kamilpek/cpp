#include <iostream>
#include <iomanip>
using namespace std;

float a, b, pole;

void pole_prostokata(float x, float y){
    pole = x * y;
    cout << fixed << setprecision(2);
    cout << "Pole wynosi " << pole << endl;
}

main(){
    cout << "Pole prostokata" << endl;
    cout << "Podaj bok a" << endl;
    cin >> a;
    cout << "Podaj bok b" << endl;
    cin >> b;

    pole_prostokata(a, b);
}