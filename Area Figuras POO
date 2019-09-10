#include <iostream>
#include "figuras.h"
using namespace std;

void Menu() {
    int choice1, choice2;
    int base, altura, apotema;
    cout << "Menu:" << endl;
    cout << "1) Triangulo" << endl;
    cout << "2) Cuadrado" << endl;
    cout << "3) Rectangulo" << endl;
    cout << "4) Poligono" << endl;
    cout << "5) Circunferencia" << endl;
    cout << "6) Salir" << endl;
    cout << "Escoge tu opcion: " << endl;
    cin >> choice1;

    switch (choice1) {
        case 1:
            {
            cout << "Base: " << endl;
            cin >> base;
            cout << "Altura: " << endl;
            cin >> altura;
            Triangulo t1(base, altura);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            break;
            }

        case 2:
            {
            cout << "Lado: " << endl;
            cin >> base;
            Cuadrado c1(base);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << c1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << c1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            break;
            }

        case 3:
            {
            cout << "Base: " << endl;
            cin >> base;
            cout << "Altura: " << endl;
            cin >> altura;
            Rectangulo t1(base, altura);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            break;
            }
        case 4:
            {
            cout << "Numero de lados: " << endl;
            cin >> base;
            cout << "Lado: " << endl;
            cin >> altura;
            cout << "Apotema: " << endl;
            cin >> apotema;
            Poligono t1(base, altura, apotema);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            break;
            }

        case 5:
            {
            cout << "radio: " << endl;
            cin >> base;
            Circunferencia t1(base);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            break;
            }
    }
}

int main()
{
    Menu();
    return 0;
}
