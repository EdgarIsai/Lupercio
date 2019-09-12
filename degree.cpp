#include <iostream>
#include "degree.h"
#include <cstdlib>
using namespace std;

void menu() {
    int choice;
    float degree;
    Degree d1;

    system("cls||clear");

    cout << "Menu:" << endl;
    cout << "1) C - K:" << endl;
    cout << "2) K - C:" << endl;
    cout << "3) C - F:" << endl;
    cout << "4) F - C:" << endl;
    cout << "5) F - K:" << endl;
    cout << "6) K - F:" << endl;
    cout << "7) Quit" << endl;
    cout << "Choose an option" << endl;

    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Type your degree C: " << endl;
            cin >> degree;
            cout << "C-K: " << d1.getCelsiusToKelvin(degree) << endl;
            system("pause");
            break;

        case 2:
            cout << "Type your degree K: " << endl;
            cin >> degree;
            cout << "K-C: " << d1.getKelvinToCelsius(degree) << endl;
            system("pause");
            break;

        case 3:
            cout << "Type your degree C: " << endl;
            cin >> degree;
            cout << "C-F: " << d1.getCelsiusToFarenheit(degree) << endl;
            system("pause");
            break;

        case 4:
            cout << "Type your degree F: " << endl;
            cin >> degree;
            cout << "F-C: " << d1.getFarenheitToCelsius(degree) << endl;
            system("pause");
            break;

        case 5:
            cout << "Type your degree F: " << endl;
            cin >> degree;
            cout << "F-K: " << d1.getFarenheitToKelvin(degree) << endl;
            system("pause");
            break;

        case 6:
            cout << "Type your degree K: " << endl;
            cin >> degree;
            cout << "K-F: " << d1.getKelvinToFarenheit(degree) << endl;
            system("pause");
            break;

        case 7:
            exit(0);

        default:
            cout << "Opcion invalida" << endl;
            system("pause");
    }
}

int main()
{
    while(true) {
        menu();
    }
    return 0;
}
