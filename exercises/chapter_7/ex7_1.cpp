#include <iostream>
#include <fstream>
using namespace std;

class plik {
    public:
    char dane[20], dane1[20];

    void czytaj_dane();
    void zapisz_dane_do_pliku();
    void czytaj_dane_z_pliku();
};

void plik::czytaj_dane(){
    cout << "Podaj imie i nazwisko" << endl;
    cin.getline(dane, sizeof(dane));
}

void plik::zapisz_dane_do_pliku(){
    cout << "Trwa zapis danych do pliku" << endl;
    ofstream plik_zapis("dane.txt");
    plik_zapis << dane << endl;
    plik_zapis.close();
}

void plik::czytaj_dane_z_pliku(){
    cout << "Odczytujemy dane1 z pliku" << endl;
    ifstream plik_odczyt("dane.txt");

    while (!plik_odczyt.eof()){
        plik_odczyt >> dane1;
        cout << dane1 << " ";
    }

    plik_odczyt.close();
}

main(){
    plik plik1;
    plik1.czytaj_dane();
    plik1.zapisz_dane_do_pliku();
    plik1.czytaj_dane_z_pliku();
}