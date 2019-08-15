#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct Agenda {
    int id;
    char nombre[30];
    char direccion[30];
    char telefono[10];
} a[10];

int index = 0;

void Alta () {
    cout << "Ingrese id" << endl;
    cin >> a[index].id;
    cout << "Ingrese nombre" << endl;
    cin >> a[index].nombre;
    cout << "Ingrese direccion" << endl;
    cin >> a[index].direccion;
    cout << "Ingrese telefono" << endl;
    cin >> a[index].telefono;
    index++;
}

int buscar (int id) {
    int x=0, pos=0, ban=0;
    while (x<10 && ban==0) {
        if (id==a[x].id) {
            pos = x;
            ban = 1;
        }
        x++;
    }
    return pos;
}

void mostrar(int pos) {
    cout << "id: " << a[pos].id << endl;
    cout << "nombre: " << a[pos].nombre << endl;
    cout << "direccion: " << a[pos].direccion << endl;
    cout << "telefono: " << a[pos].telefono << endl;
}

int main()
{
    int opc=0, id=0, posicion=0;
    do {
        system("cls");
        cout << "Menu" << endl;
        cout << "1) Alta" << endl;
        cout << "2) Buscar" << endl;
        cout << "3) Editar" << endl;
        cout << "4) Remover" << endl;
        cout << "5) Listar" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opc;
        switch(opc) {
            case 1: Alta();break;

            case 2:
                // Buscar
                cout << "Ingrese id" << endl;
                cin >> id;
                mostrar(buscar(id));
                break;

            case 3:
                // Editar
                cout << "Que id quieres editar" << endl;
                cin >> posicion;
                posicion = buscar(posicion);
                cout << "Ingrese id" << endl;
                cin >> a[posicion].id;
                cout << "Ingrese nombre" << endl;
                cin >> a[posicion].nombre;
                cout << "Ingrese direccion" << endl;
                cin >> a[posicion].direccion;
                cout << "Ingrese telefono" << endl;
                cin >> a[posicion].telefono;
                break;

            case 4:
                // Remover
                cout << "Que id quieres borrar?" << endl;
                cin >> posicion;
                posicion = buscar(posicion);
                    for (int i=posicion; i<index; i++) {
                        a[i].id = a[i+1].id;
                        strcpy(a[i].nombre, a[i+1].nombre);
                        strcpy(a[i].direccion, a[i+1].direccion);
                        strcpy(a[i].telefono, a[i+1].telefono);
                    }
                break;

            case 5:
                // Listar
                for (int i=0; i<index; i++) {
                    mostrar(i);
                }
                break;
        }
        cout << "Continuar [1] Salir[2]" <<endl;
        cin >> opc;
    } while (opc != 2);
    system("pause>>cls");
    return 0;
}
