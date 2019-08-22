/* Edgar Isai Salgado Cortez
Fibonacci sequence: hw 3
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int *fibonacci(int *opc) {
    // Generates opc fibonacci numbers
    system("cls");
    int *r = (int*) malloc(sizeof(int));
    int base = 0;
    int auxiliar = 1;

    for (int i=0; i < *opc; i++) {
        if (i == 0 || i == 1) {
            cout << base << endl;
        }
        *r = base + auxiliar;
        // Swaps base and auxiliar
        base += auxiliar;
        auxiliar = base - auxiliar;
        base -= auxiliar;
        // *r base and auxiliar
        *r += auxiliar;
        auxiliar = *r - auxiliar;
        *r -= auxiliar;
        
        if (i != 0 || i != 1) {
            cout << auxiliar <<endl;
        }

    }
    return 0;
}

int main()
{
    int *opc;
    int limit;
    int exit;

    do {
        system("cls");
        cout << "Welcome!, tell me how many fibonacci numbers do you want?" << endl;
        cin >> limit;
        opc =& limit;
        *fibonacci(opc);
        cout << "Continue [1] Exit[2]" <<endl;
        cin >> exit;
    } while(exit!=2);
    return 0;
}
