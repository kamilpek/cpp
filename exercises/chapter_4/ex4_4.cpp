#include <iostream>
using namespace std;

main(){
    const int n = 10;
    int i, j, suma, macierz[n][n];

    cout << "Wpisywanie do talibcy 1 po przekątnej, reszta 0" << endl << endl;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j)
                macierz[i][j] = i;
            else
                macierz[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }

    suma = 0;  
    for (i = 0; i < n; i++){
        suma += macierz[i][i];
    }
    cout << endl << "Suma elementów na przekątnej wynosi " << suma << "." << endl;
}