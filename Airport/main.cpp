#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "person.h"
#include "queue.h"
using namespace std;

string name_validation(string name_) {
    bool valid = true;
    int size_ = name_.size();
    string v;

    for (int i=0; i< size_; i++) {
        if (name_[i] == *" ") {
            continue;
        }

        if (!isalpha(name_[i])) {
            valid = false;
            system("cls||clear");
        }
    }

    while (!valid) {
        cout << "Type your passengers name: ";
        cin >> name_;
        valid = true;
        size_ = name_.size();
        for (int i=0; i< size_; i++) {
            if (name_[i] == *" ") {
                continue;
            }

            if (!isalpha(name_[i])) {
                valid = false;
                system("cls||clear");
            }
        }
    }
    return name_;
}


int main()
{
    Queue luggage;
    Queue ticket_queue;
    Queue onboard;
    Queue flying;
    Queue taxi;
    int tickets[30];
    int random = 0;
    int onflight = 0, passenger_number, lg = 0, flight=0, fly=0, valid_ticket=0, ticket_pos=-1, out=0;
    do {
        system("cls||clear");
        char opc;
        string name, passengers;
        string menu =
        "1) Add passenger\s \n"
        "2) Luggage check \n"
        "3) Get inside the airplane \n"
        "4) Fly \n"
        "5) Get out of the plane! \n"
        "6) Taxi! \n";
        cout << menu;
        fflush(stdout);
        opc = getch();
        switch (opc) {
            case '1':
                {
                    if (out == 0) {
                        cout << "How many passengers do you wish to add? ";
                        string passengers;
                        cin >> passengers;
                        cin.ignore();
                        bool valid = true;
                        for (int i=0; i < passengers.size(); i++) {
                            if (!isdigit(passengers[i]))
                                valid = false;
                        }
                        if (valid) {
                            passenger_number = stoi(passengers);
                            if (passenger_number > 0 && passenger_number < 21) { }
                            else { valid = false;}
                        }
                        if (valid) {
                            passenger_number = stoi(passengers);
                            for (int i=0; i < passenger_number; i++) {
                                system("cls||clear");
                                Person p;
                                cout << "Type the passenger name: ";;
                                cin >> name;
                                cin.ignore();
                                string filtered_name = name_validation(name);
                                p.set_name(filtered_name);

                                do {
                                    int flag = 0;
                                    random = rand() % 20 + 1;
                                    if (ticket_pos == -1) {
                                        ticket_pos++;
                                        tickets[ticket_pos] = random;
                                        valid_ticket = 1;
                                        continue;
                                    }

                                    for (i=0; i <= ticket_pos; i++) {
                                        if (random == tickets[i]) {
                                            valid_ticket = 0;
                                            flag = 1;
                                            break;
                                        }
                                    }

                                    if (flag == 0) {
                                        ticket_pos++;
                                        tickets[ticket_pos] = random;
                                        valid_ticket = 1;
                                    }
                                } while(!valid_ticket);
                                p.set_luggage(random);
                                p.buy_ticket();
                                ticket_queue.add(p);
                            }
                            ticket_queue.show_tickets();
                            for (int i=0; i < passenger_number; i++) {
                                Person passenger = ticket_queue.remove_();
                                luggage.add(passenger);
                            }
                            lg = 1;
                        }
                    }
                    break;
                }
            case '2':
                {
                    if (lg == 1) {
                        luggage.show_luggage();
                        for (int i=0; i < passenger_number; i++) {
                            Person passenger = luggage.remove_();
                            onboard.add(passenger);
                        }
                        flight = 2;
                        lg = 0;
                        system("pause");

                    }

                    break;
                }
            case '3':
                {
                    if (flight == 2 && out == 0) {
                        onboard.show_flight();
                        for (int i=0; i < passenger_number; i++) {
                            Person passenger = onboard.remove_();
                            flying.add(passenger);
                        }
                        fly = 3;
                        flight = 0;
                        system("pause");
                    }
                    break;
                }
            case '4':
                {
                    if (fly == 3) {
                        flying.fly();
                        fly = 2;
                        out = 1;
                        system("pause");
                    }
                    break;
                }
            case '5':
                {
                    if (out == 1) {
                        flying.get_out();
                        for (int i=0; i < passenger_number; i++) {
                            Person passenger = flying.remove_();
                            taxi.add(passenger);
                        }
                        fly = 2;
                        out = 5;
                        system("pause");
                    }
                    for (int i=0; i <20; i++) {
                        tickets[i] = -1;
                    }
                    break;
                }
            case '6':
                {
                    if (out == 5) {
                        taxi.taxi();
                        for (int x=0; x < passenger_number; x++) {
                            Person passenger = taxi.remove_();
                        }
                        out = 0;

                    }
                    break;
                }
            default:
                cout << "Invalid Option" << endl;
                system("pause");
        }
    }
    while(true);
    return 0;
}
