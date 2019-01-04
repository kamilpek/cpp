#include <iostream>
using namespace std;

main(){
    int i, suma = 0;

    cout << "Program sumuje liczby calkowite od 1 do 100" << endl;

    for (i = 1; i <= 100; i++){
        suma += i;
    }

    cout << "Suma wynosi " << suma << "." << endl;
}