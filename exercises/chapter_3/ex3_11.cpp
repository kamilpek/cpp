#include <iostream>
using namespace std;

main(){
    int i, suma = 0;

    cout << "Suma liczb parzystych od 1 do 100" << endl;

    do {
        if (i%2 == 0){
            suma += i;
        }
        i++;       
    } while (i <= 100);

    cout << "Suma wynosi " << suma << endl;
}