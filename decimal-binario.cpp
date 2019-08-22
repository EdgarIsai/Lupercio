#include <iostream>

using namespace std;

int *binary(int *number) {
    int binary_conv[20];
    int position=0, co=0, res=0;
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

int main()
{
    int *num, user_num;
    cin>>user_num;
    num =& user_num;
    *binary(num);
    return 0;
}
