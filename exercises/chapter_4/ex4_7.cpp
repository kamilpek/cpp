#include <iostream>
#include <iomanip>
using namespace std;

main(){
    const int n = 10;
    int i, j, suma, tablica[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j == 0) tablica [i][j] = i;
            if (j == 1) tablica [i][j] = i*i;
            if (j > 1) tablica [i][j] = 0;
        }
    }

    cout << "Zawartosc tablicy:" << endl << endl;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << setw(2) << tablica[i][j] << " ";
        }
        cout << endl;
    }

    suma = 0;
    for (i = 0; i < n; i++){
        suma += tablica[i][0];
    }
    cout << endl << "Suma liczb w pierwszej kolumnie: " << suma << endl;
    
    suma = 0;
    for (i = 0; i < n; i++){
        suma += tablica[i][1];
    }
    cout << "Suma liczb w pierwszej kolumnie: " << suma << endl; 
}