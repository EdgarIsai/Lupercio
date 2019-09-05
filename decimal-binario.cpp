#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <cctype>

using namespace std;

int *validationD(string *n){
    string str = *n;
    for (char c : str) {
        if(!isdigit(c)) {
            int nop=2, *nop_;
            nop_ =& nop;
            cout << "Invalido" << endl;
            return nop_;
        };
    };

}

int *validationB(string *n){
    string str = *n;
    for (char c : str) {
        if(c == *"0" || c == *"1") {
            continue;
        } else {
            int nop=2, *nop_;
            nop_ =& nop;
            cout << "Invalido" << endl;
            return nop_;};
    };

}

int *pow(int *number, int power) {
    int n = *number;

    if (power == 0) {
        int *p, pw=power+1;
        p =& pw;
        return p;
    }

    for (power; power > 1; power--) {
        n *= *number;
    }
    int *res =& n;
    return res;
}

int *decimalToBin(string *number) {
    int f = *validationD(number);
    if (f==2) {
        return 0;
    }
    string extra_ = *number;
    int n = stoi(extra_);
    int binary_conv[500];
    int position=0, co=0, res=0;
    if (n == 1) {
        cout << *number;
        return 0;
    }
    while (n/2 >= 1) {
        co = n/2;
        res = n%2;
        n = co;
        binary_conv[position] = res;

        position++;
    }
    binary_conv[position] = co;
    binary_conv[position+1] = 9;
    int len = position+1;
    int extra;

    for (int first=0, last=len; first <= position/2; first++) {
        last--;
        extra = binary_conv[first];
        binary_conv[first] = binary_conv[last];
        binary_conv[last] = extra;


    }

    for (int i=0; i <= position; i++) {
        cout << binary_conv[i];
    }

    return 0;
}

int *decimalOctal (int *number) {
    int remainders[20];
    int *base, bas=8, remainder, position=0;
    base =& bas;
    while(*number >= *base){
        remainder = *number % *base;
        *number /= *base;
        remainders[position] = remainder;
        position++;
    }
    remainders[position] = *number;
    for (position; 0<=position; position--) {
        cout << remainders[position];
    }
    return 0;
}

int *octalDecimal (int *number) {
    int *base, bas=8, remainder, position=0, last=0, lenght=*number, res=0;
    string digit;
    base =& bas;

    do {
        lenght /= 10;
        last++;
    } while(lenght);
    last--;

    for (position; position <= last; position++) {
        string str = to_string(*number);
        digit = str[position];
        if (position != last) {
            res += stoi(digit);
            res *= 8;
        }
        else {
            res += stoi(digit);
        }
    }
    cout << res;
    return 0;
}

int *decimalHexa(int *number) {
    int remainder, position=0, lenght=*number, extra=0;
    string hex[7] = {"A", "B", "C", "D", "E", "F"};
    string result[100];
    while(lenght) {
        remainder = lenght % 16;
        if (remainder >=10 && remainder <=15) {
            extra = remainder - 10;
            result[position] = hex[extra];
        } else {
            result[position] = to_string(remainder);
        }
        lenght /= 16;
        position++;
    }

    for (;position>=0; position--)
        cout << result[position];

    return 0;

}
int *hexaDecimal(string *number) {
    string hexa[2];
    int len, result=0, *base, bas=16, number_=0, *len_;
    base =& bas;
    hexa[0] = number[0];
    len = hexa[0].size();

    string c;

    for (int i=0; hexa[0][i] != '\0'; i++) {

        len--;

        if(hexa[0][i] >= '0' && hexa[0][i] <= '9')
            result = hexa[0][i] - 48;

            else if(hexa[0][i] >= 'a' && hexa[0][i] <= 'f')
                result = hexa[0][i] - 87;

                else if(hexa[0][i] >= 'A' && hexa[0][i] <= 'F')
                    result = hexa[0][i] - 55;

                    else {
                        cout << "Numero Invalido" << endl;
                        return 0;
                    }

        len_ =& len;
        number_ += result * *pow(base, len);
    }
    cout << number_ << endl;
    return 0;

}

int *binaryToDecimal(int *number) {
    int position=0, res=0, last=0, lenght=*number, power=2, *powPoint;
    powPoint =& power;


    do {
        lenght /= 10;
        last++;
    } while(lenght);
    last--;

    string str = to_string(*number);
    for (last; last >= 0; last--) {

        if (str[last] == *"1" && position == 0) {
            res += 1;
        } else if(str[last] == *"1") {
            res += *pow(powPoint, position);
        } else if(str[last] != *"0"){
            cout << "Numero Invalido";
            return 0;
        }
        position++;
    }
    cout << res;
    int *result;
    result =& res;
    return result;
}

void menu() {
    cout << "Escoge tu opcion:" << endl;
    cout << "1) Decimal-Binario" << endl;
    cout << "2) Binario-Decimal" << endl;
    cout << "3) Decimal-Octal" << endl;
    cout << "4) Octal-Decimal" << endl;
    cout << "5) Decimal-Hexadecimal" << endl;
    cout << "6) Hexadecimal-Decimal" << endl;

    int opc, com, *com_;
    string complejas, *comp=&complejas;
    float simples, *simp;
    cin >> opc;
    switch(opc) {
        case 1:
            cout << "Escribe tu numero decimal" << endl;
            cin >> complejas;
            decimalToBin(comp);
            break;
        case 2:
            cout << "Escribe tu numero binario" << endl;
            cin >> complejas;
            int v = *validationB(comp);
            if (v == 2) {
                break;
            }
            com = stoi(complejas);
            com_ =& com;
            binaryToDecimal(com_);
            break;
    }
}

int main()
{
    menu();
    return 0;
}

