#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct podmiot{
    char nip[256];
    char nazwa[256];
    char ulica[256];
    char miasto[256];
} klient, sprzedawca;

struct towar{
    char nazwa[256];
    char miara[256];
    float ilosc;
    float cenaNetto;
    float podatek;
    float wartoscNetto;
    float wartoscBrutto;
    float wartoscPodatku;
} towar[10];

struct faktura{
    int numer;
    char miejsce[256];
    char data[256];
    char termin[256];
    char sposobZaplaty[256];
    float wartoscNetto;
    float wartoscBrutto;
    float wartoscPodatku;
    int iloscTowarow;
} faktura;

void daneSprzedawcy(){    
    ifstream plikSprzedawca;
    plikSprzedawca.open("sprzedawca.txt");
    for(int i; i < 4; i++){
        if(i == 0)
            plikSprzedawca.getline(sprzedawca.nip, 256);
        if(i == 1)
            plikSprzedawca.getline(sprzedawca.nazwa, 256);            
        if(i == 2)
            plikSprzedawca.getline(sprzedawca.ulica, 256);            
        if(i == 3)
            plikSprzedawca.getline(sprzedawca.miasto, 256);            
    }
    plikSprzedawca.close();
}

void daneKlienta(){
    cout << "\nDane klienta\n";
    cin.clear();    
    cout << "Podaj NIP ";    
    cin.getline(klient.nip, sizeof(klient.nip));
    cout << "Podaj nazwę ";    
    cin.getline(klient.nazwa, sizeof(klient.nazwa));
    cout << "Podaj ulicę ";    
    cin.getline(klient.ulica, sizeof(klient.ulica));
    cout << "Podaj miasto ";    
    cin.getline(klient.miasto, sizeof(klient.miasto));
}

void daneTowaru(int i){
    int n;
    cout << "\nDane towaru/usługi" << endl;
    cin.clear();
    cin.ignore();
    cout << "Podaj nazwę ";  
    cin.getline(towar[i].nazwa, sizeof(towar[i].nazwa));
    cout << "Podaj jednostkę miary ";
    cin.getline(towar[i].miara, sizeof(towar[i].miara));
    cout << "Podaj ilość ";
    cin >> towar[i].ilosc;    
    cout << "Podaj stawkę podatku[%] ";
    cin >> towar[i].podatek;
    towar[i].podatek = towar[i].podatek / 100;
    cout << "Podaj cenę netto za sztukę ";
    cin >> towar[i].cenaNetto;
}

void daneFaktury(){
    cout << "\nDane faktury\n";
    cin.clear();    
    cout << "Podaj miejsce wystawienia ";    
    cin.getline(faktura.miejsce, sizeof(faktura.miejsce));
    cout << "Podaj date wystawienia ";    
    cin.getline(faktura.data, sizeof(faktura.data));
    cout << "Podaj termin płatności ";    
    cin.getline(faktura.termin, sizeof(faktura.termin));
    cout << "Podaj sposób zapłaty ";    
    cin.getline(faktura.sposobZaplaty, sizeof(faktura.sposobZaplaty));
    cout << "Podaj numer ";
    cin >> faktura.numer;
    cout << "Podaj ilość towarów na fakturze ";
    cin >> faktura.iloscTowarow;
}

void oblicz(int i){
    towar[i].wartoscNetto = towar[i].cenaNetto * towar[i].ilosc;    
    towar[i].wartoscPodatku = towar[i].wartoscNetto * towar[i].podatek;
    towar[i].wartoscBrutto = towar[i].wartoscNetto + towar[i].wartoscPodatku;
    faktura.wartoscNetto += towar[i].wartoscNetto;
    faktura.wartoscPodatku += towar[i].wartoscPodatku;
    faktura.wartoscBrutto += towar[i].wartoscBrutto;
}

void generujPlik(){
    ofstream plikFaktury;
    plikFaktury.open("faktura.html");
    plikFaktury << "<!DOCTYPE html><html><head><meta charset=\"utf-8\"></head><body>";
    plikFaktury << "<div align=\"right\">";
    plikFaktury << "<p>Miejscowość: " << faktura.miejsce << "</p>";
    plikFaktury << "<p>Data wystawienia: " << faktura.data << "</p>";
    plikFaktury << "<p>Termin płatności: " << faktura.termin << "</p>";
    plikFaktury << "<p>Sposób płatności: " << faktura.sposobZaplaty << "</p>";
    plikFaktury << "</div>";
    plikFaktury << "<div align=\"center\">";
    plikFaktury << "<table>";
    plikFaktury << "<tr><th>Spzedawca</th><th>Nabywca</th></tr>";
    plikFaktury << "<tr><th>NIP " << sprzedawca.nip << "</th><th>NIP " << klient.nip << "</th></tr>";
    plikFaktury << "<tr><th>" << sprzedawca.nazwa << "</th><th>" << klient.nazwa << "</th></tr>";
    plikFaktury << "<tr><th>" << sprzedawca.ulica << "</th><th>" << klient.ulica << "</th></tr>";
    plikFaktury << "<tr><th>" << sprzedawca.miasto << "</th><th>" << klient.miasto << "</th></tr>";
    plikFaktury << "</table>";
    plikFaktury << "</div>";
    plikFaktury << "<h1 align=\"center\">Faktura numer " << faktura.numer << "</h1>";
    plikFaktury << "<br>";
    plikFaktury << "<div align=\"center\">";
    plikFaktury << "<table border=\"1\">";
    plikFaktury << "<tr><th>L.P.</th><th>Nazwa</th><th>Ilość</th><th>J.M.</th>";
    plikFaktury << "<th>Wartość Netto</th><th>VAT</th><th>Kwotwa VAT</th><th>Wartość Brutto</th></tr>";
    for(int i = 0; i < faktura.iloscTowarow; i++){
        plikFaktury << "<tr><th>" << (i + 1) << ".</th><th>" << towar[i].nazwa << "</th>" << "<th>" << towar[i].ilosc << "</th>";
        plikFaktury << "<th>" << towar[i].miara << "</th>" << "<th>" << towar[i].wartoscNetto << "</th>";
        plikFaktury << "<th>" << towar[i].podatek << "</th>" << "<th>" << towar[i].wartoscPodatku << "</th>";
        plikFaktury << "<th>" << towar[i].wartoscBrutto << "</th>";
    }
    plikFaktury << "</table>";
    plikFaktury << "</div>";
    plikFaktury << "<br>";
    plikFaktury << "<div align=\"right\">";
    plikFaktury << "<p>Razem Netto: " << faktura.wartoscNetto << " zł</p>";
    plikFaktury << "<p>Razem Vat: " << faktura.wartoscPodatku << " zł</p>";
    plikFaktury << "<p>Razem do zapłaty: " << faktura.wartoscBrutto << " zł</p>";    
    plikFaktury << "</div>";
    plikFaktury << "</body></html>";
    plikFaktury.close();
}

main(){    
    cout << "Witaj w programie\n--- FAKTURKA ---\n";
    daneSprzedawcy();
    daneKlienta();
    daneFaktury();
    for(int i = 0; i < faktura.iloscTowarow; i++){
        daneTowaru(i);
        oblicz(i);
    }
    cout << "\nTrwa przygotowywanie faktury...\n";
    generujPlik();
}