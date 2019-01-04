#include <iostream>
#include <iomanip>
using namespace std;

class pole_prostkata {
    public:
    float a, b, pole;
    void czytaj_dane();
    void przetworz_dane();
    void wyswietl_wyniki();
};

void pole_prostkata::czytaj_dane() {
    cout << "Pole prostokata" << endl;
    cout << "Podaj bok a" << endl;
    cin >> a;
    cout << "Podaj bok b" << endl;
    cin >> b;
}

void pole_prostkata::przetworz_dane(){
    pole = a * b;
}

void pole_prostkata::wyswietl_wyniki(){
    cout << fixed << setprecision(2);
    cout << "Pole wynosi " << pole << endl;
}

main(){
    pole_prostkata pole;
    pole.czytaj_dane();
    pole.przetworz_dane();
    pole.wyswietl_wyniki();
}

