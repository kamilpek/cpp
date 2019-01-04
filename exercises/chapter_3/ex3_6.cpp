#include <iostream>
using namespace std;

main(){
    int i = 1;

    cout << "Liczby calkowite od 1 do 20" << endl;

    while (i <= 20){
        if ( i < 20){
            cout << i << ", ";
        } else {
            cout << i << "." << endl;
        }
        i++;
    }
}