#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <stdlib.h>

class Person {
    private:
        std::string name;
        bool ticket;
        int luggage = 0;
        std::string standp1 = "    o";
        std::string standp2 = " + /|\\ ";
        std::string standp3 = "+-+ | ";
        std::string standp4 = "| | | ";
        std::string standp5 = "+-+   ";

        std::string walk1 = "    o";
        std::string walk2 = " + /|\\ ";
        std::string walk3 = "+-+ | ";
        std::string walk4 = "| | |\\ ";
        std::string walk5 = "+-+   ";



        std:: string erase_p = "          ";

    public:
        void set_name(std::string name_) {
            name = name_;
        }

        void buy_ticket() {
            ticket = true;
        }

        void set_luggage(int n) {
            luggage = n;
        }

        std::string get_name() {
            return name;
        }

        std::string get_walk(int opc) {
            if (opc == 1)
                return standp1;

            if (opc == 2)
                return standp2;
            if (opc == 3)
                return standp3;
            if (opc == 4)
                return standp4;
            if (opc == 5)
                return standp5;
            if (opc == 6)
                return walk1;
            if (opc == 7)
                return walk2;
            if (opc == 8)
                return walk3;
            if (opc == 9)
                return walk4;
            if (opc == 10)
                return walk5;
            if (opc == 11)
                return erase_p;
        }

        int get_luggage() {
            return luggage;
        }
};

#endif // PERSON_H_INCLUDED
