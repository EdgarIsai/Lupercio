#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<stdio.h>
#include <windows.h>
#include <ctype.h>
#include <string>

class Stack {
    private:
        float stack[100];
        int position = -1;
    public:

        void gotoxy(int x,int y){
          HANDLE hcon;
          hcon = GetStdHandle(STD_OUTPUT_HANDLE);
          COORD dwPos;
          dwPos.X = x;
          dwPos.Y= y;
          SetConsoleCursorPosition(hcon,dwPos);
        }

        int space_validation(std::string str) {
            int len = str.size();

            for (int i = 0; i < len; i++) {
                if (str[i] == *" ") {
                    std::cout << "A poner espacios a otro lado >:v" << std::endl;
                    return 1;
                }

                if (!isdigit(str[i])) {
                    std::cout << "Not a valid number" << std::endl;
                    return 1;
                }
                return 0;
            };
        }

        void push(std::string str) {
            int flag = space_validation(str);
            if (flag == 1) { } else {
                if (position < 100) {


                    float val = std::stof(str);
                    stack[++position] = val;
                }
            }
        }

        void pop() {
            if (position > -1)
                position--;
        }

        bool empty() {
            if (position == -1) {
                return true;
            }
        }

        float top() {
            if (position!=-1)
                return stack[position];
            return -1;
        }

        void show() {

            int x=50, y=20;
            for (int element=0; element <= position; element++) {
                gotoxy(x,y--);printf("********");
                gotoxy(x,y--);printf("*%5.1f *", stack[element]);
            };

            gotoxy(0,0);

        }
};

#endif // STACK_H_INCLUDED
