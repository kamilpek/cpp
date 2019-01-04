#include <iostream>
#include <fstream>
using namespace std;

const int rozmiar = 10;

class matrix {
    public:
    void czytaj_dane(int tablica[rozmiar][rozmiar], int rozmiar);
    void zapisz_dane_do_pliku(int tablica[rozmiar][rozmiar], int rozmiar);
    void czytaj_dane_z_pliku(int tablica[rozmiar][rozmiar], int rozmiar);   
};

void matrix::czytaj_dane(int tablica[rozmiar][rozmiar], int rozmiar){
    int i, j;

    for (i = 0; i < rozmiar; i++)   {
        for (j = 0; j < rozmiar; j++){
            if (i == j)
                tablica[i][j] = 1;
            else
                tablica[i][j] = 0;
        }
    }
}

void matrix::zapisz_dane_do_pliku(int tablica[rozmiar][rozmiar], int rozmiar){
    int i, j;

    cout << "Zapisujemy tablice 10x10 do pliku" << endl;

    ofstream plik_zapis("dane.txt");

    for (i = 0; i < rozmiar; i++){
        for (j = 0; j < rozmiar; j++){
            cout << tablica[i][j] << " ";
            plik_zapis << tablica[i][j];
        }
        cout << endl;
    }
    plik_zapis.close();
}

void matrix::czytaj_dane_z_pliku(int tablica[rozmiar][rozmiar], int rozmiar){
    int i, j;

    cout << endl << "Odczytujemy tablice 10x10 z pliku" << endl;

    ifstream plik_odczyt("dane.txt");
    for (i = 0; i < rozmiar; i++){
        for (j = 0; j < rozmiar; j++){
            plik_odczyt >> tablica[i][j];
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
    plik_odczyt.close();
}

main(){
    int tab[rozmiar][rozmiar];

    matrix matrix1;
    matrix1.czytaj_dane(tab, rozmiar);
    matrix1.zapisz_dane_do_pliku(tab, rozmiar);
    matrix1.czytaj_dane_z_pliku(tab, rozmiar);
}