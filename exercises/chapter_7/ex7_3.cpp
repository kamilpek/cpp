#include <iostream>
#include <fstream>
using namespace std;

const int n = 10;

class matrix {
    public:
    int a[n][n], b[n][n], c[n][n];
    void czytaj_dane();
    void przetworz_dane();
    void zapisz_dane_do_pliku();
    void czytaj_dane_z_pliku();
};

void matrix::czytaj_dane(){
    int i, j;
    cout << "Tworzymy tablice a." << endl;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == 1)
                a[i][j] = 1;
            else
                a[i][j] = 0;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix::przetworz_dane(){
    int i, j;
    cout << endl << "Przepisujemy elemnty z tablicy a do b" << endl;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }        
    }
}

void matrix::zapisz_dane_do_pliku(){
    int i, j;
    cout << "Zapisujemy tablice b do pliku dane.txt" << endl;
    ofstream plik_zapis("dane.txt");

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << b[i][j] << " ";
            plik_zapis << b[i][j] << endl;
        }
        cout << endl;
    }

    plik_zapis.close();
}

void matrix::czytaj_dane_z_pliku(){
    int i, j;

    cout << endl << "Odczytujemy tablice c z pliku dane.txt" << endl;
    ifstream plik_odczyt("dane.txt");

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            plik_odczyt >> c[i][j];
            cout << c[i][j];
        }
        cout << endl;
    }

    plik_odczyt.close();
}

main(){
    matrix matrix1;

    matrix1.czytaj_dane();
    matrix1.przetworz_dane();
    matrix1.zapisz_dane_do_pliku();
    matrix1.czytaj_dane_z_pliku();
}