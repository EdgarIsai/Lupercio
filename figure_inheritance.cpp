#include <iostream>
#include "Figure.h"
#include "degree.h"
using namespace std;

void Menu() {
    system("cls||clear");
    int choice1, choice2, sides;
    float base, altura, apotema, degree;
    float *deg=&degree;
    float *b=&base, *h=&altura, *p=&apotema;
    int *s=&sides;

    cout << "Menu:" << endl;
    cout << "1) Triangulo" << endl;
    cout << "2) Cuadrado" << endl;
    cout << "3) Rectangulo" << endl;
    cout << "4) Poligono" << endl;
    cout << "5) Circunferencia" << endl;
    cout << "6) C - K:" << endl;
    cout << "7) K - C:" << endl;
    cout << "8) C - F:" << endl;
    cout << "9) F - C:" << endl;
    cout << "10) F - K:" << endl;
    cout << "11) K - F:" << endl;
    cout << "12) Quit" << endl;
    cout << "Escoge tu opcion: " << endl;
    cin >> choice1;

    switch (choice1) {
        case 1:
            {
            cout << "Base: " << endl;
            cin >> base;
            cout << "Altura: " << endl;
            cin >> altura;
            Triangle t1(b, h);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
            }

        case 2:
            {
            cout << "Lado: " << endl;
            cin >> base;
            Square c1(b);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << c1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << c1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
            }

        case 3:
            {
            cout << "Base: " << endl;
            cin >> base;
            cout << "Altura: " << endl;
            cin >> altura;
            Rectangle t1(b, h);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
            }
        case 4:
            {
            cout << "Numero de lados: " << endl;
            cin >> sides;
            cout << "Lado: " << endl;
            cin >> altura;
            cout << "Apotema: " << endl;
            cin >> apotema;
            Poligon t1(b, h, s);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
            }

        case 5:
            {
            cout << "radio: " << endl;
            cin >> base;
            Circle t1(b);

            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cin >> choice2;
            if (choice2 == 1)
                cout << "El area es " << t1.getArea() << endl;
            else if (choice2 == 2)
                cout << "El perimetro es " << t1.getPerimeter() << endl;
            else
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
            }
     // Degree
     case 6:
         {
        cout << "Type your degree C: " << endl;
        cin >> degree;
        Celsius c1(deg);
        cout << "C-K: " << c1.getCelsiusToKelvin() << endl;
        system("pause");
        break;
        }

    case 7:
        {
        cout << "Type your degree K: " << endl;
        cin >> degree;
        Kelvin k1(deg);
        cout << "K-C: " << k1.getKelvinToCelsius() << endl;
        system("pause");
        break;
        }

    case 8:
        {
        cout << "Type your degree C: " << endl;
        cin >> degree;
        Celsius c1(deg);
        cout << "C-F: " << c1.getCelsiusToFarenheit() << endl;
        system("pause");
        break;
        }


    case 9:
        {
        cout << "Type your degree F: " << endl;
        cin >> degree;
        Farenheit f1(deg);
        cout << "F-C: " << f1.getFarenheitToCelsius() << endl;
        system("pause");
        break;
        }


    case 10:
        {
        cout << "Type your degree F: " << endl;
        cin >> degree;
        Farenheit f1(deg);
        cout << "F-K: " << f1.getFarenheitToKelvin() << endl;
        system("pause");
        break;
        }


    case 11:
        {
        cout << "Type your degree K: " << endl;
        cin >> degree;
        Kelvin k1(deg);
        cout << "K-F: " << k1.getKelvinToFarenheit() << endl;
        system("pause");
        break;
        }

    case 12:
        exit(0);

    default:
        cout << "Opcion invalida" << endl;
        system("pause");
    }
}

int main()
{
    while(true) {
        Menu();
    }
    return 0;
}
