#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int n1=0,n2=0;
int *ptr1,*ptr2;
int *suma (int*,int*);
int *resta (int*,int*);
int *multiplicacion (int*,int*);
int *division (int*,int*);


int *calculadora(int *ptr1, int *ptr2, int opcion){
        int *r = (int*) malloc(sizeof(int));
        switch(opcion) {
            case 1:
                *r = (*ptr1)+(*ptr2);
                cout << "La suma es: " << *r << endl;
                break;
            case 2:
                *r = (*ptr1)-(*ptr2);
                cout << "La suma es: " << *r << endl; break;
            case 3:
                *r = (*ptr1)*(*ptr2);
                cout << "La suma es: " << *r << endl; break;
            case 4:
                *r = (*ptr1)/(*ptr2);
                cout << "La suma es: " << *r << endl; break;
    }
    return 0;
}


int main()
{

    int opc=0;
    do {
        system("cls");
        cout << "Menu" << endl;
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) Multiplicacion" << endl;
        cout << "4) Division" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opc;
        system("cls");
        cout << "Ingrese numero 1: ";
        cin >> n1;
        cout << "Ingrese numero 2: ";
        cin >> n2;

        ptr1 =& n1;
        ptr2 =& n2;
        *calculadora(ptr1, ptr2, opc);
        cout << "Continuar [1] Salir[2]" <<endl;
        cin >> opc;
    } while(opc!=2);
    system("pause");
    return 0;
}

