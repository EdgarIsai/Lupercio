#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<stdio.h>
#include <windows.h>
#include <ctype.h>
#include <string>
#include "Person.h"

class Queue {
    public:
        int position = -1;
        Person stack[100];
        void gotoxy(int x,int y){
          HANDLE hcon;
          hcon = GetStdHandle(STD_OUTPUT_HANDLE);
          COORD dwPos;
          dwPos.X = x;
          dwPos.Y= y;
          SetConsoleCursorPosition(hcon,dwPos);
        }


        void add(Person person) {

            if (position < 100) {
                stack[++position] = person;
            }

        }

        Person remove_() {
            if (position > -1) {
                Person removed = stack[0];
                for (int element=0; element < position; element++) {
                    stack[element] = stack[element+1];
                }
                position--;
                return removed;
            }
        }

        bool empty() {
            if (position == -1) {
                return true;
            }
        }

        std::string top() {
            if (position!=-1)
                return stack[position].get_name();
            return "-1";
        }

        void show_tickets() {
            std::string shop1 = "+---------+";
            std::string shop2 = "| Tickets |";
            std::string shop3 = "|---------|";
            std::string shop4 = "|         |";
            std::string shop5 = "|+-------+|";
            std::string shop6 = "|+-------+|";
            std::string shop7 = "+---------+";

            int x=0, y=9, finalx = 100;

            gotoxy(120, y++); std::cout << shop1;
            gotoxy(120, y++); std::cout << shop2;
            gotoxy(120, y++); std::cout << shop3;
            gotoxy(120, y++); std::cout << shop4;
            gotoxy(120, y++); std::cout << shop5;
            gotoxy(120, y++); std::cout << shop6;
            gotoxy(120, y++); std::cout << shop7;
            y = 10;
            for (int element=0; element <= position; element++) {
                for (int step=0; step <= finalx;) {
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(1);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(2);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(3);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(4);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(5);
                    y = 10;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);

                    y = 10;
                    step += 5;
                    Sleep(100);
                    if (step == 100) {
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        y = 10;
                    }
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(6);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(7);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(8);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(9);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(10);
                    y = 10;


                    Sleep(100);
            }
            };
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            Sleep(1000);
        }
        void show_luggage() {
            system("cls||clear");
            std::string shop1 = "+---------+";
            std::string shop2 = "| Luggage |";
            std::string shop3 = "|---------|";
            std::string shop4 = "|         |";
            std::string shop5 = "|  xxxxxxx|";
            std::string shop6 = "|xxxxxxxxx|";
            std::string shop7 = "+---------+";

            int x=0, y=9, finalx = 100;

            gotoxy(120, y++); std::cout << shop1;
            gotoxy(120, y++); std::cout << shop2;
            gotoxy(120, y++); std::cout << shop3;
            gotoxy(120, y++); std::cout << shop4;
            gotoxy(120, y++); std::cout << shop5;
            gotoxy(120, y++); std::cout << shop6;
            gotoxy(120, y++); std::cout << shop7;
            y = 10;
            for (int element=0; element <= position; element++) {
                for (int step=0; step <= finalx;) {
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name() << " " << stack[element].get_luggage();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(1);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(2);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(3);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(4);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(5);
                    y = 10;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);

                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name() << " " << stack[element].get_luggage();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(6);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(7);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(8);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(9);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(10);
                    y = 10;


                    Sleep(100);
                }
            Sleep(stack[element].get_luggage()*1000);
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            y = 10;
            };
            gotoxy(0, 0);
        }
    void show_flight() {
        system("cls||clear");
        std::string airplane1 = "                            |";
        std::string airplane2 = "                          .-'-.";
        std::string airplane3 = "                         ' ___ '";
        std::string airplane4 = "               ---------'  .-.  '---------";
        std::string airplane5 = "________________________'  '-'  '_________________________";
        std::string airplane6 = " ''''''-|---|--/    \==][^',_m_,'^][==/    \--|---|-''''''";
        std::string airplane7 = "               \    /  ||/   H   \||  \    /";
        std::string airplane8 = "                '--'   OO   O|O   OO   '--'";

    int x=0, y=10, finalx = 100;

            gotoxy(120, y++); std::cout << airplane1;
            gotoxy(120, y++); std::cout << airplane2;
            gotoxy(120, y++); std::cout << airplane3;
            gotoxy(120, y++); std::cout << airplane4;
            gotoxy(120, y++); std::cout << airplane5;
            gotoxy(120, y++); std::cout << airplane6;
            gotoxy(120, y++); std::cout << airplane7;
            gotoxy(120, y++); std::cout << airplane8;
            y = 10;
            for (int element=0; element <= position; element++) {
                for (int step=0; step <= finalx;) {
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(1);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(2);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(3);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(4);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(5);
                    y = 10;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);

                    y = 10;
                    step += 5;
                    Sleep(100);
                    if (step == 100) {
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        y = 10;
                    }
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(6);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(7);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(8);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(9);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(10);
                    y = 10;


                    Sleep(100);
            }
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            y = 10;
            };

            gotoxy(0, 0);
    }

void fly() {
    system("cls||clear");
    std::string airplane1 = "                            |";
    std::string airplane2 = "                          .-'-.";
    std::string airplane3 = "                         ' ___ '";
    std::string airplane4 = "               ---------'  .-.  '---------";
    std::string airplane5 = "________________________'  '-'  '_________________________";
    std::string airplane6 = " ''''''-|---|--/    \==][^',_m_,'^][==/    \--|---|-''''''";
    std::string airplane7 = "               \    /  ||/   H   \||  \    /";
    std::string airplane8 = "                '--'   OO   O|O   OO   '--'";

    int x = 50, y = 30;


    for (int i=0; i<15; i++) {

        Sleep(200);

        system("cls||clear");
        gotoxy(50, y--); std::cout << airplane8;
        int z = y;
        gotoxy(50, y--); std::cout << airplane7;
        gotoxy(50, y--); std::cout << airplane6;
        gotoxy(50, y--); std::cout << airplane5;
        gotoxy(50, y--); std::cout << airplane4;
        gotoxy(50, y--); std::cout << airplane3;
        gotoxy(50, y--); std::cout << airplane2;
        gotoxy(50, y--); std::cout << airplane1;
        y = z;
    }
}

void get_out() {
        system("cls||clear");
        std::string airplane1 = "                            |";
        std::string airplane2 = "                          .-'-.";
        std::string airplane3 = "                         ' ___ '";
        std::string airplane4 = "               ---------'  .-.  '---------";
        std::string airplane5 = "________________________'  '-'  '_________________________";
        std::string airplane6 = " ''''''-|---|--/    \==][^',_m_,'^][==/    \--|---|-''''''";
        std::string airplane7 = "               \    /  ||/   H   \||  \    /";
        std::string airplane8 = "                '--'   OO   O|O   OO   '--'";

    int x=0, y=10, finalx = 100;

            gotoxy(0, y++); std::cout << airplane1;
            gotoxy(0, y++); std::cout << airplane2;
            gotoxy(0, y++); std::cout << airplane3;
            gotoxy(0, y++); std::cout << airplane4;
            gotoxy(0, y++); std::cout << airplane5;
            gotoxy(0, y++); std::cout << airplane6;
            gotoxy(0, y++); std::cout << airplane7;
            gotoxy(0, y++); std::cout << airplane8;
            y = 10;
            for (int element=0; element <= position; element++) {
                for (int step=70; step <= finalx;) {
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(1);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(2);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(3);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(4);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(5);
                    y = 10;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);

                    y = 10;
                    step += 5;
                    Sleep(100);
                    if (step == 100) {
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        y = 10;
                    }
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(6);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(7);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(8);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(9);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(10);
                    y = 10;


                    Sleep(100);
            }
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            y = 10;
            };

            gotoxy(0, 0);
    }

void taxi() {
        system("cls||clear");
        std::string taxi1 = "              .----' `-----.";
        std::string taxi2 = "             //^^^^;;^^^^^^`\\";
        std::string taxi3 = "     _______//_____||_____()_\\________";
        std::string taxi4 = "    /       :      : ___              `\\";
        std::string taxi5 = "   |>   ____;      ;  |/-\\><|   ____   _<)";
        std::string taxi6 = "  {____/    \\_________________/    \\____}";
        std::string taxi7 = "       \\ '' /                 \\ '' /";
        std::string taxi8 = "        '---'                   '---'";

    int x=0, y=10, finalx = 100;

            gotoxy(120, y++); std::cout << taxi1;
            gotoxy(120, y++); std::cout << taxi2;
            gotoxy(120, y++); std::cout << taxi3;
            gotoxy(120, y++); std::cout << taxi4;
            gotoxy(120, y++); std::cout << taxi5;
            gotoxy(120, y++); std::cout << taxi6;
            gotoxy(120, y++); std::cout << taxi7;
            gotoxy(120, y++); std::cout << taxi8;
            y = 10;
            for (int element=0; element <= position; element++) {
                for (int step=0; step <= finalx;) {
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    y = 10;
                    step += 5;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(1);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(2);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(3);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(4);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(5);
                    y = 10;
                    Sleep(100);
                    gotoxy(step, y++); std::cout << "        ";
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(11);

                    y = 10;
                    step += 5;
                    Sleep(100);
                    if (step == 100) {
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        gotoxy(step, y++); std::cout << "                   ";
                        y = 10;
                    }
                    gotoxy(step, y++); std::cout << stack[element].get_name();
                    gotoxy(step, y++); std::cout << stack[element].get_walk(6);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(7);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(8);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(9);
                    gotoxy(step, y++); std::cout << stack[element].get_walk(10);
                    y = 10;


                    Sleep(100);
            }
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            gotoxy(100, y++); std::cout << "                   ";
            y = 10;
            };

            gotoxy(0, 0);
    }
};

#endif // STACK_H_INCLUDED
