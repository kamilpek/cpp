#include <iostream>
using namespace std;

main(){
    int x = 0, y = 0;

    cout << "Program oblicza wartosc funckji y = 3x dla x zmienijacego sie od 0 do 10" << endl;

    do {
        y = 3*x;
        cout << "x = " << x << "\ty = " << y << endl;
        x++;
    } while (x <= 10);
}