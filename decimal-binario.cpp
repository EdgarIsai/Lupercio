#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int *pow(int *number, int power) {
    int n = *number;
    for (power; power > 1; power--) {
        n *= *number;
    }
    int *res =& n;
    return res;
}

int *decimalToBin(int *number) {
    int binary_conv[20];
    int position=0, co=0, res=0;
    if (*number == 1) {
        cout << *number;
        return 0;
    }
    while (*number/2 >= 1) {
        co = *number/2;
        res = *number%2;
        *number = co;
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

*decimalOctal (int *number) {
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

*octalDecimal (int *number) {
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

int main()
{
    int *num, user_num;
    cin>>user_num;
    num =& user_num;
    *octalDecimal(num);
    return 0;
}
