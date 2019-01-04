#include <iostream>
using namespace std;

main(){
    const int n = 10;

    int wiersze, kolumny;

    cout << "Tabliczka mnozenia" << endl << endl;

    for (wiersze = 1; wiersze <= n; wiersze++){
        for(kolumny = 1; kolumny <= n; kolumny++){
            cout << wiersze * kolumny << "\t";            
        }
        cout << endl;
    }
}