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
        switch(opc) {
            case 1: cout << "La suma es: " << *suma(ptr1,ptr2) << endl; break;
            case 2: cout << "La resta es: " << *resta(ptr1,ptr2) << endl;; break;
            case 3: cout << "La multiplicacion es: " << *multiplicacion(ptr1,ptr2) << endl;; break;
            case 4: cout << "La division es: " << *division(ptr1,ptr2) << endl;; break;
        }
        cout << "Continuar [1] Salir[2]" <<endl;
        cin >> opc;
    } while(opc!=2);
    system("pause");
    return 0;
}

int *suma(int *n1, int *n2){
    int *r = (int*) malloc(sizeof(int));
    *r = (*n1)+(*n2);
    return r;
}

int *resta(int *n1, int *n2){
    int *r = (int*) malloc(sizeof(int));
    *r = (*n1)-(*n2);
    return r;
}

int *multiplicacion(int *n1, int *n2){
    int *r = (int*) malloc(sizeof(int));
    *r = (*n1)*(*n2);
    return r;
}

int *division(int *n1, int *n2){
    int *r = (int*) malloc(sizeof(int));
    *r = (*n1)/(*n2);
    return r;
}


