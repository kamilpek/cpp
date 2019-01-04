// gcc -o a.out ex2_2.cpp -lstdc++ -lm && ./a.our
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main(){
    float a, b, c, delta, x1, x2;

    cout << "Program oblicza pierwiastki rownania kwadratowego";
    cout << "Podaj a" << endl;
    cin >> a;

    if (a == 0){
        cout << "Niedozwolona wartosc a";
    } else {
        cout << "Podaj b." << endl;
        cin >> b;
        cout << "Podaj c." << endl;
        cin >> c;

        cout << fixed << setprecision(2);
        cout << "Dla podanych liczb," << endl;

        delta = b*b-4*a*c;
        
        if (delta < 0){
            cout << "brak pierwiastkow rzeczywistych" << endl;
        } else {
            if (delta == 0) {
                x1 = -b/(2*a);
                cout << "trojmian ma jeden pierwiastek podwojny x1 = " << x1 << "." << endl;                
            } else {                
                x1 = (-b - sqrt(delta)) / (2*a);
                x2 = (-b + sqrt(delta)) / (2*a);                
                cout << "trojamian ma dwa pierwiastki: " << endl;
                cout << "x1 = " << x1 << "." << endl;
                cout << "x2 = " << x2 << "." << endl;
            }
        }        
    }
}