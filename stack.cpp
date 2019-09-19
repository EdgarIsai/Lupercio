#include <iostream>
#include <string>

#include "stack.h"
using namespace std;

Stack s;

void menu() {
    int opc;
    string n="as";
    cout << "1)push" << endl;
    cout << "2)pop" << endl;
    cout << "3)top" << endl;
    cout << "4)empty" << endl;
    cout << "5)quit" << endl;
    cin >> opc;

    switch (opc) {
        case 1: {

            cout << "Type your number: ";
            fflush(stdin);
            cin >> n;
            fflush(stdin);
            s.push(n);
            break;
            }
        case 2:
            s.pop();
            break;
        case 3:
            if (s.top() != -1)
            cout << "The top element is " << s.top() << endl;
            system("pause");
            break;
        case 4:
            if(s.empty())
                cout << "It's empty" << endl;
            else
                cout << "It's not empty" << endl;
            system("pause");
            break;
        case 5:
            exit(0);
        default:
            cout << "not valid";
    }
}
int main() {
  string greeting = "1";
  while (true) {
      system("cls||clear");
      s.show();
      menu();
  }

  return 0;
}
