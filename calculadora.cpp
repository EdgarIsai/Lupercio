#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <cctype>
#include <cmath>

using namespace std;

int n1=0,n2=0;
int *ptr1,*ptr2;
int *suma (int*,int*);
int *resta (int*,int*);
int *multiplicacion (int*,int*);
int *division (int*,int*);


float *calculadora(float *ptr1, float *ptr2, int opcion){
        float *r = (float*) malloc(sizeof(float));
        switch(opcion) {
            case 1:
                *r = (*ptr1)+(*ptr2);
                cout << "La suma es: " << *r << endl;
                break;
            case 2:
                *r = (*ptr1)-(*ptr2);
                cout << "La suma es: " << *r << endl; break;
            case 3:
                *r = (*ptr1)*(*ptr2);
                cout << "La suma es: " << *r << endl; break;
            case 4:
                *r = (*ptr1)/(*ptr2);
                cout << "La suma es: " << *r << endl; break;
    }
    return 0;
}

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

int *validationF(string *n){
    string str = *n;
    for (char c : str) {
        if(!isdigit(c) && c != *".") {
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

int *validationO(string *n){
    string str = *n;
    for (char c : str) {
        if(c >= *"0" && c <= *"7") {
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



float *pow_(float *number, int power) {
    float n = *number;

    if (power == 0) {
        float *p, pw=power+1;
        p =& pw;
        return p;
    }

    for (power; power > 1; power--) {
        n *= *number;
    }
    float *res =& n;
    return res;
}

float *porcentaje(float *number, float *porc) {
    float n = *number;
    float porc_ = *porc;
    float resultado = n * (porc_/100);
    float *res =& resultado;
    return res;
}

float *seno(float *number) {
    float n = sin(*number);
    float *res =& n;
    return res;
}

float *coseno(float *number) {
    float n = cos(*number);
    float *res =& n;
    return res;
}

float *tangente(float *number) {
    float n = tan(*number);
    float *res =& n;
    return res;
}

float *raiz(float *number) {
    float n = sqrt(*number);
    float *res =& n;
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
    if (position==0) {
        cout << 0;
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
                        cout << "Invalido" << endl;
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
    int v;
    cout << "Escoge tu opcion:" << endl;
    cout << "1) Decimal-Binario" << endl;
    cout << "2) Binario-Decimal" << endl;
    cout << "3) Decimal-Octal" << endl;
    cout << "4) Octal-Decimal" << endl;
    cout << "5) Decimal-Hexadecimal" << endl;
    cout << "6) Hexadecimal-Decimal" << endl;
    cout << "7) Suma" << endl;
    cout << "8) Resta" << endl;
    cout << "9) Multiplicacion" << endl;
    cout << "10) Division" << endl;
    cout << "11) Potencia" << endl;
    cout << "12) Sin" << endl;
    cout << "13) Cos" << endl;
    cout << "14) Tan" << endl;
    cout << "15) Elevar al cuadrado" << endl;
    cout << "16) Porcentaje" << endl;
    cout << "17) raiz" << endl;
    cout << "0) salir" << endl;
    cout << "Seleccione una opcion" << endl;

    int nn, com, *com_, extra;
    float n1, n2_, *ptn1=&n1, *ptn2=&n2_;
    string opc, complejas, *comp=&complejas, n2, *ptr2=&n2;
    float simples, *simp;
    cin >> opc;
    string v2, *v2_=&v2;
    v2 = opc;
    v = *validationD(v2_);

    if (v==2)
        nn = 22;
        else {
            nn = stoi(opc);
        }


    switch(nn) {
        case 0:
            exit(0);
        case 1:
            cout << "Escribe tu numero decimal" << endl;
            cin >> complejas;
            decimalToBin(comp);
            break;

        case 2:
            cout << "Escribe tu numero binario" << endl;
            cin >> complejas;
            v = *validationB(comp);
            if (v == 2) {
                break;
            }
            com = stoi(complejas);
            com_ =& com;
            binaryToDecimal(com_);
            break;
        case 3:
            cout << "Escribe tu numero decimal" << endl;
            cin >> complejas;
            v = *validationD(comp);
            if (v == 2) {
                break;
            }
            com = stoi(complejas);
            com_ =& com;
            decimalOctal(com_);
            break;

        case 4:
            cout << "Escribe tu numero octal" << endl;
            cin >> complejas;
            v = *validationO(comp);
            if (v == 2) {
                break;
            }
            com = stoi(complejas);
            com_ =& com;
            octalDecimal(com_);
            break;

        case 5:
            cout << "Escribe tu numero decimal" << endl;
            cin >> complejas;
            v = *validationD(comp);
            if (v == 2) {
                break;
            }
            com = stoi(complejas);
            com_ =& com;
            decimalHexa(com_);
            break;

        case 6:
            cout << "Escribe tu numero decimal" << endl;
            cin >> complejas;
            *hexaDecimal(comp);
            break;
        case 7:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            n2_ = stof(n2);
            calculadora(ptn1, ptn2, 1);
            break;

        case 8:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            n2_ = stof(n2);
            calculadora(ptn1, ptn2, 2);
            break;

        case 9:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            n2_ = stof(n2);
            calculadora(ptn1, ptn2, 3);
            break;

        case 10:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            n2_ = stof(n2);
            calculadora(ptn1, ptn2, 4);
            break;

        case 11:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            extra = stoi(n2);
            com_ =& extra;
            cout << *pow_(ptn1, extra);
            break;

        case 12:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            cout << *seno(ptn1);
            break;
        case 13:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            cout << *coseno(ptn1);
            break;

        case 14:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            cout << *tangente(ptn1);
            break;

        case 15:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            com_ =& extra;
            cout << *pow_(ptn1, 2);
            break;

        case 16:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            cout << "Cuanto porcentaje quieres sacar" << endl;
            cin >> n2;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            v = *validationF(ptr2);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            n2_ = stof(n2);
            cout << *porcentaje(ptn1, ptn2);
            break;

        case 17:
            cout << "Escribe tu numero flotante" << endl;
            cin >> complejas;
            v = *validationF(comp);
            if (v == 2) {
                break;
            }
            n1 = stof(complejas);
            cout << *raiz(ptn1);
            break;
    }
}

int main()
{
    int start=1;
    while(start) {
        menu();
        cout << endl;
        system("pause");
        system("cls");
    }

    return 0;
}
