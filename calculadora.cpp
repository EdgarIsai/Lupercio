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
    system("cls");
    cout << "Ingrese numero 1: ";
    cin >> n1;
    cout << "Ingrese numero 2: ";
    cin >> n2;

    ptr1 =& n1;
    ptr2 =& n2;

    cout << "La suma es: " << *suma(ptr1,ptr2) << endl;
    cout << "La resta es: " << *resta(ptr1,ptr2) << endl;
    cout << "La multiplicacion es: " << *multiplicacion(ptr1,ptr2) << endl;
    cout << "La division es: " << *division(ptr1,ptr2) << endl;


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


