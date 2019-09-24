#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<stdio.h>
#include <windows.h>
#include <ctype.h>
#include <string>

class Queue {
    public:
        int position = -1;
        std::string stack[100];
        void gotoxy(int x,int y){
          HANDLE hcon;
          hcon = GetStdHandle(STD_OUTPUT_HANDLE);
          COORD dwPos;
          dwPos.X = x;
          dwPos.Y= y;
          SetConsoleCursorPosition(hcon,dwPos);
        }


        void add(std::string str) {

            if (position < 100) {
                stack[++position] = str;
            }

        }

        std::string remove_() {
            if (position > -1)
                for (int element=0; element < position; element++) {
                    stack[element] = stack[element+1];
                }
                position--;
                return stack[0];
        }

        bool empty() {
            if (position == -1) {
                return true;
            }
        }

        std::string top() {
            if (position!=-1)
                return stack[position];
            return "-1";
        }

        void show() {

            int x=95, y=10;
            for (int element=0; element <= position; element++) {
                gotoxy(x-=11,y);std::cout << stack[element];
                gotoxy(x,11);std::cout << "--->";
            };

            gotoxy(0,0);
        }
};

#endif // STACK_H_INCLUDED
