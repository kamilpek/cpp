#include <iostream>
using namespace std;

main(){
    const int n = 10;
    int i, dane[n];
    
    for (i = 0; i < 10; i++){
        dane[i] = i;
        cout << "dane[" << i << "] = " << dane[i] << endl;
    }
}