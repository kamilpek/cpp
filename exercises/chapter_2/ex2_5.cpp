#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

main(){
    int losuj_liczbe, zgadnij_liczbe;

    cout << "Losowanie liczby od 0 do 9" << endl;
    srand(time(NULL));
    losuj_liczbe = rand()%10;
    cin >> zgadnij_liczbe;

    if (zgadnij_liczbe == losuj_liczbe) {
        cout << "Brawo, zgadłeś" << endl;
    } else {
        cout << "Niestety, liczba to: " << losuj_liczbe << endl;
    }

}