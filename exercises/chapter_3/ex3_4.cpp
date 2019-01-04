#include <iostream>
using namespace std;

main(){
    int i;

    cout << "Liczby calkowite od 1 do 20" << endl;

    for(i = 1; i <= 20; i++){
        if (i < 20) {
            cout << i << ", ";
        } else {
            cout << i << "." << endl;
        }
    }    
}