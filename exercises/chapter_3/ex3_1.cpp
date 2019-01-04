#include <iostream>
using namespace std;

main(){
    int x, y;

    cout << "Program oblicza wartosc funckji y = 3x dla x zmienijacego sie od 0 do 10" << endl;

    for (x = 0; x <= 10; x++){
        y = 3*x;
        cout << "x = " << x << "\ty = " << y << endl;
    }
}