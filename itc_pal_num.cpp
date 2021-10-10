#include <iostream>
#include "middle.h"

using namespace std;

int itc_pal_num(long long number)
{
    int max1 = number % 10;
    int i, num1 = 0;
    i = itc_len_num(number);
    while (number >= 10){
        num1 += (number % 10) * itc_pow(i, 10);
        number /= 10;
        i --;
    }
    num1 += (number % 10) * itc_pow(i, 10);
    return num1;
}
