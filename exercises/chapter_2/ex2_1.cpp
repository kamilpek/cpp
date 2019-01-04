#include <iostream>
using namespace std;

main(){
    int a, b , c;

    cout << "Program sprawdza, czy boki a, b oraz c tworza trojkat prostokatny." << endl;
    cout << "Podaj bok a." << endl;
    cin >> a;
    cout << "Podaj bok b." << endl;
    cin >> b;
    cout << "Podaj bok c." << endl;
    cin >> c;

    if ((a*a+b*b) == (c*c)){
        cout << "Jest to trojkat prostokatny" << endl;
    } else {
        cout << "Niestety nie jest to trojkat prostokatny" << endl;
    }
}