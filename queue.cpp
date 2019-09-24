#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <windows.h>

#include "stack.h"
using namespace std;


    void gotoxy(int x,int y){
          HANDLE hcon;
          hcon = GetStdHandle(STD_OUTPUT_HANDLE);
          COORD dwPos;
          dwPos.X = x;
          dwPos.Y= y;
          SetConsoleCursorPosition(hcon,dwPos);
        }


int main() {




    Queue s;
    string names [10] {"Alex", "Isai", "Beto", "Rene", "Mike", "Carlos", "Uniterno", "Brandon", "Fernando", "Christian"}, next_client = "";
    int cont=0, nclient=0;
    while (true) {
        int rand();
        int flag = 0;


        int random = rand()%10;

        if (nclient == 1) {
            gotoxy(50, 15);cout << next_client;
        }

        Sleep(1000);

        for (int name=0; name <= s.position; name++) {
             if (s.stack[name] == names[random]) {
                flag = 1;
                nclient = 0;
            }
        }

        while(flag == 1) {
            flag = 0;
            random = rand()%10;
            for (int name=0; name <= s.position; name++) {
                 if (s.stack[name] == names[random]) {
                    flag = 1;
                    nclient = 0;
                }
            }
        }

        if (flag == 0) {
            s.add(names[random]);
            cont++;
        }

        if (cont > 7) {
            next_client = s.stack[00];
            s.remove_();


            nclient = 1;
        }

        system("cls");

        s.show();


        cout << cont;


    }


  return 0;
}
